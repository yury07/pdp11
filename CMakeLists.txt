cmake_minimum_required(VERSION 3.9)
project(pdp11 C)

set(CMAKE_C_STANDARD 99)

add_executable(pdp11 main.c load_inst.h load_inst.c)