#!/usr/bin/env python3
"""思考等级测试（依次测试 low/medium/high）"""
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.executors import SingleThreadedExecutor
from ros_agent.action import Chat
from ros_agent.msg import ChatMessage, ContentPart

class ReasoningClient(Node):
    def __init__(self):
        super().__init__('reasoning_client')
        self.client = ActionClient(self, Chat, 'llm_chat')

    async def run(self):
        self.client.wait_for_server(timeout_sec=10.0)

        for effort in ["low", "medium", "high"]:
            goal = Chat.Goal()
            goal.stream = False
            goal.reasoning_effort = effort
            goal.messages = [make_msg("user", "1+1等于几？请逐步推理")]

            goal_handle = await self.client.send_goal_async(goal)
            result = await goal_handle.get_result_async()
            r = result.result
            print(f"\n--- 等级: {effort} ---")
            print(f"成功: {r.success}")
            print(f"回复: {r.content}")
            print(f"思考: {r.reasoning_content}")
            print(f"tokens: {r.total_tokens}")

def make_msg(role, text):
    msg = ChatMessage(role=role)
    part = ContentPart(type="text", text=text)
    msg.parts = [part]
    return msg

def main():
    rclpy.init()
    node = ReasoningClient()
    executor = SingleThreadedExecutor()
    executor.add_node(node)
    future = executor.create_task(node.run())
    executor.spin_until_future_complete(future, timeout_sec=120.0)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()