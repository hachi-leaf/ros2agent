#!/usr/bin/env python3
"""流式对话测试"""
import sys
import threading
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.executors import MultiThreadedExecutor
from ros_agent.action import Chat
from ros_agent.msg import ChatMessage, ContentPart

class StreamClient(Node):
    def __init__(self):
        super().__init__('stream_client')
        self.client = ActionClient(self, Chat, 'llm_chat')
        self.reasoning_done = False  # 标记推理是否结束

    def feedback_cb(self, fb_msg):
        fb = fb_msg.feedback
        # 推理内容
        if fb.partial_reasoning:
            sys.stdout.write(fb.partial_reasoning)
            sys.stdout.flush()
        # 正式回复（第一次出现时先换个行）
        if fb.partial_content:
            if not self.reasoning_done:
                print("\n--- 回复 ---")
                self.reasoning_done = True
            sys.stdout.write(fb.partial_content)
            sys.stdout.flush()

    def run(self):
        self.client.wait_for_server(timeout_sec=10.0)

        goal = Chat.Goal()
        goal.stream = True
        goal.messages = [make_msg("user", "用一句话介绍ROS2")]

        future = self.client.send_goal_async(goal, feedback_callback=self.feedback_cb)
        # 等待 goal 被接受
        while not future.done():
            pass
        goal_handle = future.result()

        # 等待最终结果
        result_future = goal_handle.get_result_async()
        while not result_future.done():
            pass
        r = result_future.result().result
        print(f"\n\n完成, 成功: {r.success}, tokens: {r.total_tokens}")

def make_msg(role, text):
    msg = ChatMessage(role=role)
    part = ContentPart(type="text", text=text)
    msg.parts = [part]
    return msg

def main():
    rclpy.init()
    node = StreamClient()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    spin_thread = threading.Thread(target=executor.spin, daemon=True)
    spin_thread.start()
    node.run()
    rclpy.shutdown()
    spin_thread.join(timeout=1.0)

if __name__ == '__main__':
    main()