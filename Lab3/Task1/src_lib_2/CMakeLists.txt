cmake_minimum_required (VERSION 3.8)

add_library(Task2lib STATIC "func.c")
target_include_directories(Task2lib PUBLIC "../Include")