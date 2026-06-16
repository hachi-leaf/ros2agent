#!/usr/bin/env python3
import asyncio
import json
import threading
from typing import Dict

import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
import aiohttp

from llm_bridge.action import Chat
from llm_bridge.msg import ChatMessage, ContentPart


class LLMChatNode(Node):
    def __init__(self):
        super().__init__('llm_chat_node')

        self.declare_parameter('model_url', 'http://localhost:8000/v1')
        self.declare_parameter('api_key', 'sk-xxxxx')
        self.declare_parameter('model_name', 'gpt-3.5-turbo')

        self.model_url = self.get_parameter('model_url').value.rstrip('/')
        self.api_key = self.get_parameter('api_key').value
        self.model_name = self.get_parameter('model_name').value

        self.goal_tasks: Dict[str, asyncio.Task] = {}

        self._action_server = ActionServer(
            self,
            Chat,
            'llm_chat',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback,
            callback_group=ReentrantCallbackGroup()
        )

        self.loop = asyncio.new_event_loop()
        self.loop_thread = threading.Thread(target=self._run_loop, daemon=True)
        self.loop_thread.start()

        self.get_logger().info(f'LLM Chat Node started. Model: {self.model_name}')

    def _run_loop(self):
        asyncio.set_event_loop(self.loop)
        self.loop.run_forever()

    def goal_callback(self, goal_request):
        self.get_logger().info('Received new goal')
        return GoalResponse.ACCEPT

    def cancel_callback(self, goal_handle):
        goal_id = goal_handle.goal_id.uuid.hex
        self.get_logger().info(f'Cancel requested for goal {goal_id}')
        task = self.goal_tasks.get(goal_id)
        if task and not task.done():
            task.cancel()
        return CancelResponse.ACCEPT

    async def execute_callback(self, goal_handle):
        goal_id = goal_handle.goal_id.uuid.hex
        request = goal_handle.request

        task = self.loop.create_task(
            self._handle_chat(goal_handle, request)
        )
        self.goal_tasks[goal_id] = task

        try:
            await task
        except asyncio.CancelledError:
            self.get_logger().info(f'Goal {goal_id} was cancelled')
            goal_handle.abort()
            return
        finally:
            self.goal_tasks.pop(goal_id, None)

    async def _handle_chat(self, goal_handle, request):
        api_messages = []
        for msg in request.messages:
            role = msg.role
            if not msg.parts:
                api_messages.append({"role": role, "content": ""})
                continue

            content_parts = []
            for part in msg.parts:
                if part.type == "text":
                    content_parts.append({"type": "text", "text": part.text})
                elif part.type == "image_url":
                    content_parts.append({
                        "type": "image_url",
                        "image_url": {"url": part.image_url}
                    })
            if len(content_parts) == 1 and content_parts[0]["type"] == "text":
                api_messages.append({"role": role, "content": content_parts[0]["text"]})
            else:
                api_messages.append({"role": role, "content": content_parts})

        payload = {
            "model": self.model_name,
            "messages": api_messages,
            "stream": request.stream
        }
        headers = {
            "Content-Type": "application/json",
            "Authorization": f"Bearer {self.api_key}"
        }
        url = f"{self.model_url}/chat/completions"

        try:
            async with aiohttp.ClientSession() as session:
                if request.stream:
                    await self._stream_request(session, url, headers, payload, goal_handle)
                else:
                    await self._blocking_request(session, url, headers, payload, goal_handle)
        except asyncio.CancelledError:
            raise
        except Exception as e:
            self.get_logger().error(f'Request failed: {e}')
            goal_handle.abort()

    async def _stream_request(self, session, url, headers, payload, goal_handle):
        async with session.post(url, json=payload, headers=headers) as resp:
            if resp.status != 200:
                text = await resp.text()
                goal_handle.abort()
                self.get_logger().error(f'API error {resp.status}: {text}')
                return

            full_content = ""
            async for line in resp.content:
                line = line.decode('utf-8').strip()
                if not line or not line.startswith('data: '):
                    continue
                data_str = line[len('data: '):]
                if data_str == '[DONE]':
                    break
                try:
                    data = json.loads(data_str)
                    delta = data['choices'][0]['delta']
                    chunk = delta.get('content', '')
                    if chunk:
                        full_content += chunk
                        feedback = Chat.Feedback()
                        feedback.partial_content = chunk
                        goal_handle.publish_feedback(feedback)
                except (json.JSONDecodeError, KeyError):
                    continue

            result = Chat.Result()
            result.content = full_content
            result.success = True

            result.updated_messages = list(goal_handle.request.messages)
            assistant_msg = ChatMessage()
            assistant_msg.role = 'assistant'
            text_part = ContentPart()
            text_part.type = 'text'
            text_part.text = full_content
            assistant_msg.parts = [text_part]
            result.updated_messages.append(assistant_msg)

            goal_handle.succeed()

    async def _blocking_request(self, session, url, headers, payload, goal_handle):
        async with session.post(url, json=payload, headers=headers) as resp:
            if resp.status != 200:
                text = await resp.text()
                goal_handle.abort()
                self.get_logger().error(f'API error {resp.status}: {text}')
                return
            data = await resp.json()
            content = data['choices'][0]['message']['content']

            result = Chat.Result()
            result.content = content
            result.success = True

            result.updated_messages = list(goal_handle.request.messages)
            assistant_msg = ChatMessage()
            assistant_msg.role = 'assistant'
            text_part = ContentPart()
            text_part.type = 'text'
            text_part.text = content
            assistant_msg.parts = [text_part]
            result.updated_messages.append(assistant_msg)

            goal_handle.succeed()


def main(args=None):
    rclpy.init(args=args)
    node = LLMChatNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()