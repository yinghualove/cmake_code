#set cmake minimum version
cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(AddSample VERSION 1.0)

#first way 
# add the executable
#add_executable(add main.cpp add.cpp)

#second way
# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
#aux_source_directory(. DIR_SRCS)
#add_executable(add ${DIR_SRCS})

#third way
SET(SRC_LIST main.cpp add.cpp)
add_executable(add ${SRC_LIST})
