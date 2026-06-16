#!/usr/bin/env python3
"""非流式对话测试"""
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.executors import SingleThreadedExecutor
from ros_agent.action import Chat
from ros_agent.msg import ChatMessage, ContentPart

class NonStreamClient(Node):
    def __init__(self):
        super().__init__('non_stream_client')
        self.client = ActionClient(self, Chat, 'llm_chat')

    async def run(self):
        # 等待服务上线
        self.client.wait_for_server(timeout_sec=10.0)

        # 构建 Goal
        goal = Chat.Goal()
        goal.stream = False
        goal.messages = [make_msg("user", "用一句话介绍ROS2")]

        # 发送请求
        goal_handle = await self.client.send_goal_async(goal)
        result = await goal_handle.get_result_async()
        r = result.result
        print(f"成功: {r.success}")
        print(f"回复: {r.content}")
        print(f"思考: {r.reasoning_content}")

def make_msg(role, text):
    msg = ChatMessage(role=role)
    part = ContentPart(type="text", text=text)
    msg.parts = [part]
    return msg

def main():
    rclpy.init()
    node = NonStreamClient()
    executor = SingleThreadedExecutor()
    executor.add_node(node)
    future = executor.create_task(node.run())
    executor.spin_until_future_complete(future, timeout_sec=60.0)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()