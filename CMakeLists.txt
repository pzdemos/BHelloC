cmake_minimum_required(VERSION 3.23)
project(employeeMS)
#设置c++标准
set(CMAKE_CXX_STANDARD 14)

# 添加包含路径
include_directories(include)

add_executable(employeeMS main.cpp)
add_executable(MemoryModelBefore MemoryModelBefore/before.cpp)
add_executable(MemoryModelAfter MemoryModelAfter/after.cpp)
add_executable(quote quote/quote.cpp)
add_executable(function function/function.cpp)
add_executable(ClassObject ClassObject/class.cpp)
add_executable(privateAttribute ClassObject/privateAttribute/private.cpp)
add_executable(cube ClassObject/cube/main.cpp)
add_executable(circle ClassObject/circle/main.cpp ClassObject/circle/Point.cpp ClassObject/circle/Circle.cpp )