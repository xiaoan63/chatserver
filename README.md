# 项目介绍
可以工作在nginx tcp负载均衡环境中的集群聊天服务器和客户端源码，基于muduo实现。采用redis实现跨服务器通信，MYSQL数据库环境搭建。

#环境依赖

#目录结构描述
├── README.md                //项目的帮助文档
├── autobuild.sh             //一键编译脚本
├── bin                      //存放编译生成的可执行文件
│   ├── ChatClient           //服务端可执行文件
│   └── ChatServer           //客户端可执行文件
├── build                    //存放编译过程中生成的中间文件和构建产物
├── CMakeLists.txt           //CMake项目的配置文件
├── include                  //存放项目的头文件
│   ├── public.hpp           //公共头文件，包含全局的宏定义
│   └── server               //存放服务器相关的头文件
│       ├── chatserver.hpp           //服务器的主头文件，定义了服务器的核心类和接口   
│       ├── chatservice.hpp          //
│       ├── db
│       ├── model
│       └── redis
├── src
│   ├── client
│   │   ├── CMakeLists.txt
│   │   └── main.cpp
│   ├── CMakeLists.txt
│   └── server
│       ├── chatserver.cpp
│       ├── chatservice.cpp
│       ├── CMakeLists.txt
│       ├── db
│       │   └── db.cpp
│       ├── main.cpp
│       ├── model
│       │   ├── friendmodel.cpp
│       │   ├── groupmodel.cpp
│       │   ├── offlinemessagemodel.cpp
│       │   └── usermodel.cpp
│       └── redis
│           └── redis.cpp
└── thirdparty
    └── json.hpp
