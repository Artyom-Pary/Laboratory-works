cmake_minimum_required (VERSION 3.8)

add_library(Task3lib STATIC "func.c")
target_include_directories(Task3lib PUBLIC "../Include")