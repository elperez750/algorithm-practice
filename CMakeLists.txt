cmake_minimum_required(VERSION 4.3)
project(algorithm-practice-c)

set(CMAKE_CXX_STANDARD 20)

add_executable(algorithm-practice-c main.c
        test.cpp
        test.h
        insertion_sort.c
        insertion_sort.h
        swap.c
        swap.h
        three_jugs.c
        three_jugs.h
)
