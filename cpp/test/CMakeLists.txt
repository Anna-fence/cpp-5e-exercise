cmake_minimum_required(VERSION 3.23)
project(test)

set(CMAKE_CXX_STANDARD 14)

add_executable(test2 test2.cpp)
add_executable(lovewl lovewl.cpp)
add_executable(xnhu xnhu.cpp)

# 你需要在CMakeLists.txt 加入 add_executable(前缀 前缀.cpp)