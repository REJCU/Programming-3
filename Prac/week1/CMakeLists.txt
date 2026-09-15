cmake_minimum_required(VERSION 3.14)
project(week1-prac)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


add_executable(week1 week1programs.cpp)

# compile flags - 
target_compile_options(week1 PRIVATE -Werror -Wall -Wextra)
