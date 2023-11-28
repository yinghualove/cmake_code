#set cmake minimum version
#建议使用大写 
CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

# set the project name and version
PROJECT(AddSample VERSION 1.0)

#添加add_dir子目录
ADD_SUBDIRECTORY(add_dir)

#生成目标
SET(SRC_LIST main.c)
ADD_EXECUTABLE(count ${SRC_LIST})

# 添加链接库
target_link_libraries(count add)
