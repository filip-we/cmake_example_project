cmake_minimum_required(VERSION 3.1...3.27)

add_library(MyLibExample a.c)

target_include_directories(MyLibExample PUBLIC .)
