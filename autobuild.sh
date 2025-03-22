#!/bin/bash

set -x

# 获取当前工作目录
current_dir=$(pwd)

# 删除 build 文件夹中的内容
rm -rf "${current_dir}/build/*"

# 进入 build 文件夹
cd "${current_dir}/build" || exit 1

# 运行 cmake 和 make 命令
cmake .. && make
