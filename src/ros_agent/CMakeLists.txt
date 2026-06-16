cmake_minimum_required(VERSION 3.8)
project(ros_agent)

# 依赖
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(nlohmann_json REQUIRED)
find_package(CURL REQUIRED)

# 接口文件
rosidl_generate_interfaces(${PROJECT_NAME}
  "action/Chat.action"
  "msg/ChatMessage.msg"
  "msg/ContentPart.msg"
  "srv/ExecuteCommand.srv"
)

# LLM 聊天节点
add_executable(llm_chat_node src/llm_chat_node.cpp)
target_include_directories(llm_chat_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
ament_target_dependencies(llm_chat_node
  rclcpp
  rclcpp_action
  nlohmann_json
  CURL
)
rosidl_target_interfaces(llm_chat_node ${PROJECT_NAME} "rosidl_typesupport_cpp")

# 命令执行节点
add_executable(executor_node src/executor_node.cpp)
target_include_directories(executor_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
ament_target_dependencies(executor_node rclcpp)
rosidl_target_interfaces(executor_node ${PROJECT_NAME} "rosidl_typesupport_cpp")

# 安装
install(TARGETS
  llm_chat_node
  executor_node
  DESTINATION lib/${PROJECT_NAME}
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()