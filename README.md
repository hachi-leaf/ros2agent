# ROS2Agent

基于 ROS2 的 ReAct 智能体框架。

## 架构

- llm_chat_node: LLM 对话节点 (Action Server)
- executor_node: 命令执行节点 (Service Server)
- test_react_agent.py: ReAct 循环控制器

## 快速开始

```bash
colcon build --symlink-install
source install/setup.bash
ros2 run ros_agent llm_chat_node &
ros2 run ros_agent executor_node &
python3 scripts/test_react_agent.py
```

## 接口

- Chat.action: 对话请求/响应/流式反馈
- ExecuteCommand.srv: 命令执行
- ChatMessage.msg / ContentPart.msg: 消息结构

## 安全

- 无 sudo 权限
- 命令超时 30 秒
- 最多 10 轮循环

## 许可证

Apache-2.0
