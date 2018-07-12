# CMake minimum version required
cmake_minimum_required (VERSION 3.1)
set (CMAKE_CXX_STANDARD 11)

# project name
project (leetcode)

# find current directory source file
# save to DIR_SRCS variable
aux_source_directory(. DIR_SRCS)

# generate executable
add_executable(${PROJECT_NAME} ${DIR_SRCS})