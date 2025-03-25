# 项目介绍
可以工作在 Nginx TCP 负载均衡环境中的集群聊天服务器和客户端源码，基于 muduo 实现。采用 Redis 实现跨服务器通信，MySQL 数据库环境搭建。

# 环境依赖
- **操作系统**：Linux
- **编程语言**：C++
- **编译器**：支持 C++11 或更高版本的编译器（如 GCC 4.8+ 或 Clang）
- **依赖库**：
  - **muduo**：用于网络编程
  - **MySQL**：数据库
  - **Redis**：用于跨服务器通信
  - **nginx**: 用于服务器的快速集群搭建
  - **Json** : 用于实现数据交换
- **工具**：
  - **CMake**：用于项目构建
  - **Git**：版本控制工具

# 目录结构描述
'''

.
├── README.md                // 项目的帮助文档
├── autobuild.sh             // 一键编译脚本
├── bin                      // 存放编译生成的可执行文件
│   ├── ChatClient           // 客户端可执行文件
│   └── ChatServer           // 服务端可执行文件
├── build                    // 存放编译过程中生成的中间文件和构建产物
├── CMakeLists.txt           // CMake 配置文件
├── include                  // 存放项目的头文件
│   ├── public.hpp           // 公共头文件，包含全局的宏定义
│   └── server               // 存放服务器相关的头文件
├── src                      // 存放项目的源代码
│   ├── client               // 存放客户端的源代码
│   ├── CMakeLists.txt       // CMake 配置文件
│   └── server               // 存放服务端的源代码
└── thirdparty               // 存放用于处理 JSON 数据的 json 库的头文件
