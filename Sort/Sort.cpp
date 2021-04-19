//
// Created by lefeihu on 2021/4/19.
//

#include <iostream>
#include <array>

#include "Sort.h"
#include "string"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "SelectSort.h"
#include "MergeSort.h"
#include "QuickSort.h"

class BubbleSort;

void PrintDividingLine();

void PrintDividingLine() {
    printf("===========================\n");
}

int Sort::Main() {

    int data[] = {9,7,8,5,6,3,4,1,2};
    int length = *(&data+ 1) - data;

    bool show_progress = false;

    //冒泡排序
    auto bubbleSort = BubbleSort(data, length);
    bubbleSort.show_progress = show_progress;
    bubbleSort.Sort();

    //插入排序
    auto insertionSort = InsertionSort(data, length);
    insertionSort.show_progress = show_progress;
    insertionSort.Sort();

    //选择排序
    auto selectSort = SelectSort(data, length);
    selectSort.show_progress = show_progress;
    selectSort.Sort();

    //归并排序
    auto mergeSort = MergeSort(data, length);
    mergeSort.show_progress = show_progress;
    mergeSort.Sort();

    //快速排序
    auto quickSort = QuickSort(data, length);
    quickSort.show_progress = show_progress;
    quickSort.Sort();

    return 0;
}