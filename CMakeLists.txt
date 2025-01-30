cmake_minimum_required(VERSION 3.29)
project(practical)

set(CMAKE_CXX_STANDARD 17)

add_executable(HelloWorld HelloWorld.c)
add_executable(test getchar.c)
add_executable(new_target getch.c)
add_executable(fgets string/fgets.c)
add_executable(gets string/gets.c)
add_executable(strcp string/strcp.c)
