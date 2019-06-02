cmake_minimum_required (VERSION 3.8)

add_library(Task1lib STATIC "func.c")
target_include_directories(Task1lib PUBLIC "../Include")