cmake_minimum_required(VERSION 3.14)
project(week3-prac)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SOURCES
	carutils.cpp
	carutils.h
)

# compile flags 


add_executable(main main.cpp ${SOURCES})

target_compile_options(main  PRIVATE -Werror -Wall -Wextra)
