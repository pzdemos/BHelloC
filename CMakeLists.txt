cmake_minimum_required(VERSION 3.23)
project(employeeMS)

set(CMAKE_CXX_STANDARD 14)

add_executable(employeeMS main.cpp)
add_executable(MemoryModelBefore MemoryModelBefore/before.cpp)
add_executable(MemoryModelAfter MemoryModelAfter/after.cpp)
add_executable(quote quote/quote.cpp)
add_executable(function function/function.cpp)
