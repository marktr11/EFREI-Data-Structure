# THESE 2 LINE SHOULD NOT APPEAR IN SUBFOLDER CMAKE BECAUSE THE SUBFOLDER IS NOT A PROJECT
#cmake_minimum_required(VERSION 4.0)
#project(LinkedList C)

set(CMAKE_C_STANDARD 11)

add_executable(
        Play play.c
        Linked_List.c
        Linked_List.h
)
