cmake_minimum_required(VERSION 3.14)
project(cpp_template)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
include_directories(include/cpp_template)

add_subdirectory(lib/mardcpp)
add_subdirectory(src)
