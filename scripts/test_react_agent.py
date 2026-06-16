#!/usr/bin/env python3
"""
交互式流式 ReAct Agent
- 用户输入问题
- Agent 流式输出思考/动作
- 自动执行命令并将结果返回给 LLM
- 最终答案流式输出
"""
import sys
import threading
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.executors import MultiThreadedExecutor

from ros_agent.action import Chat
from ros_agent.msg import ChatMessage, ContentPart
from ros_agent.srv import ExecuteCommand

# ========== ReAct 提示词 ==========
SYSTEM_PROMPT = """你是一个能够执行命令的助手。请严格按以下格式回答：

思考：<你的推理>
动作：<要执行的命令>
等待系统返回观察结果，再继续。

如果已得到最终答案，请输出：
最终答案：<答案>

注意：每次只输出一个动作。不要同时输出多个动作。"""

def make_msg(role, text):
    msg = ChatMessage(role=role)
    part = ContentPart(type="text", text=text)
    msg.parts = [part]
    return msg

def parse_action(text):
    """提取动作命令"""
    for line in text.split("\n"):
        line = line.strip()
        if line.startswith("动作：") or line.startswith("Action:"):
            cmd = line.split("：", 1)[-1].strip()
            if not cmd and ":" in line:
                cmd = line.split(":", 1)[-1].strip()
            return cmd
    return None

def parse_final_answer(text):
    """提取最终答案"""
    for line in text.split("\n"):
        if "最终答案" in line or "Final Answer" in line:
            if "：" in line:
                return line.split("：", 1)[-1].strip()
            if ":" in line:
                return line.split(":", 1)[-1].strip()
    return None

class ReactAgent(Node):
    def __init__(self):
        super().__init__('react_agent')
        self.chat_client = ActionClient(self, Chat, 'llm_chat')
        self.exec_client = self.create_client(ExecuteCommand, 'execute_command')

        self.chat_client.wait_for_server(timeout_sec=10.0)
        self.exec_client.wait_for_service(timeout_sec=10.0)

        # 持久化对话历史
        self.messages = [make_msg("system", SYSTEM_PROMPT)]


    def feedback_cb(self, fb_msg):
        """流式回调：实时打印增量内容"""
        fb = fb_msg.feedback
        if fb.partial_reasoning:
            sys.stdout.write(fb.partial_reasoning)
            sys.stdout.flush()
        if fb.partial_content:
            sys.stdout.write(fb.partial_content)
            sys.stdout.flush()

    def think_stream(self, messages):
        """
        流式调用 LLM，实时打印，返回完整回复文本。
        使用 MultiThreadedExecutor 后台 spin + 带超时的等待。
        """
        goal = Chat.Goal()
        goal.stream = True
        goal.messages = messages
        goal.max_context_tokens = 1000000
        goal.truncation_strategy = "drop_oldest"

        # 发送 goal，注册反馈回调
        future = self.chat_client.send_goal_async(goal, feedback_callback=self.feedback_cb)

        # 等待 goal 被接受（最多 10 秒）
        rclpy.spin_until_future_complete(self, future, timeout_sec=10.0)
        if not future.done():
            self.get_logger().error("Timeout waiting for goal acceptance")
            return None
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().error("Goal rejected")
            return None

        # 等待最终结果（最多 60 秒，根据模型响应时间调整）
        result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future, timeout_sec=60.0)
        if not result_future.done():
            self.get_logger().error("Timeout waiting for model response")
            # 超时后尝试取消 goal
            goal_handle.cancel_goal_async()
            return None

        res = result_future.result().result
        if not res.success:
            self.get_logger().error(f"LLM error: {res.error_msg}")
            return None
        return res.content

    def execute(self, command):
        """执行命令并返回输出字符串"""
        req = ExecuteCommand.Request()
        req.command = command
        future = self.exec_client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        res = future.result()
        if res.exit_code != 0:
            return f"命令失败 (exit={res.exit_code})\n{res.output}"
        return res.output.strip()

    def run(self, question):
        """处理一个用户问题，并累加上下文"""
        # 追加用户消息
        self.messages.append(make_msg("user", question))

        for step in range(10):
            print(f"\n--- 第 {step+1} 轮思考 ---")
            reply = self.think_stream(self.messages)   # 注意传入 self.messages
            if reply is None:
                print("LLM 调用失败")
                self.messages.pop()                     # 失败时移除用户消息，避免残留
                return "错误：模型无响应"
            print()

            # 检查最终答案
            final = parse_final_answer(reply)
            if final:
                # 将助手最终回复也存入历史
                self.messages.append(make_msg("assistant", reply))
                return final

            # 提取动作
            cmd = parse_action(reply)
            if cmd is None:
                self.messages.append(make_msg("assistant", reply))
                self.messages.append(make_msg("user", "请给出动作或最终答案。"))
                continue

            print(f"\n[执行] {cmd}")
            obs = self.execute(cmd)
            print(f"[结果] {obs}")

            # 动作+观察写入历史
            self.messages.append(make_msg("assistant", reply))
            self.messages.append(make_msg("user", f"观察结果：\n{obs}"))

        # 超步数，仍然把当前进展存入历史
        self.messages.append(make_msg("assistant", "超过最大步数，任务中止。"))
        return "超过最大步数，任务中止。"
def main():
    rclpy.init()
    node = ReactAgent()
    # 使用多线程 executor 在后台 spin，处理反馈和服务调用
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    spin_thread = threading.Thread(target=executor.spin, daemon=True)
    spin_thread.start()

    print("===== 交互式 ReAct Agent =====")
    print("输入问题开始对话，输入 'quit' 退出")

    try:
        while True:
            user_input = input("\n>>> ")
            if user_input.strip().lower() in ("quit", "exit"):
                break
            if not user_input.strip():
                continue

            answer = node.run(user_input)
            print(f"\n===== 最终答案 =====\n{answer}")

    except KeyboardInterrupt:
        print("\n退出")
    finally:
        rclpy.shutdown()
        spin_thread.join(timeout=1.0)

if __name__ == '__main__':
    main()