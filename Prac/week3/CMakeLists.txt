cmake_minimum_required(VERSION 3.14)
project(week3-prac)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


add_executable(main)

# compile flags - 
target_compile_options(week3 PRIVATE -Werror -Wall -Wextra)
