cmake_minimum_required(VERSION 3.17)
project(CppLearning)

set(CMAKE_CXX_STANDARD 14)

add_executable(CppLearning main.cpp Sort/Sort.cpp Sort/Sort.h Sort/BubbleSort.cpp Sort/BubbleSort.h Sort/SortBase.cpp Sort/SortBase.h Sort/InsertionSort.cpp Sort/InsertionSort.h Sort/SelectSort.cpp Sort/SelectSort.h Sort/MergeSort.cpp Sort/MergeSort.h Sort/QuickSort.cpp Sort/QuickSort.h)