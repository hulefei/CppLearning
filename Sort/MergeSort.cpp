//
// Created by lefeihu on 2021/4/19.
//

#include <cstdio>
#include <iostream>
#include "MergeSort.h"

MergeSort::MergeSort(int *data, int length) : SortBase(data, length) {

}

void MergeSort::Sort() {
    int* newData = new int[length];
    CopyArray(data, newData, length);
    Sort(newData, length);
    delete newData;
}

void MergeSort::Sort(int *data, int length) {
    std::cout << "MergeSort:" << ToString(data, length) << std::endl;

    MergeSortC(data, 0, length - 1);

    std::cout << "MergeSort Result:" << ToString(data, length) << std::endl;
}

void MergeSort::MergeSortC(int data[], int begin, int end) {
    if (begin >= end) return;

    int mid = (begin + end) / 2;

    MergeSortC(data, begin, mid);
    MergeSortC(data, mid + 1, end);
    Merge(data, begin, mid, mid + 1 ,end);
}

void MergeSort::Merge(int data[],  int begin1, int end1, int begin2, int end2) {

    if (show_progress) {
        for (int i = 0; i < length; i++) {
            if (i == begin1 || i == begin2) {
                printf("[");
            }
            if (i == length - 1) {
                printf("%d", data[i]);
            } else {
                printf("%d,", data[i]);
            }

            if (i == end1 || i == end2) {
                printf("]");
            }
        }
        printf("\n");
    }



    int i = begin1;
    int j = begin2;

    int length = end2 - begin1 + 1;
    int *tempData = new int[length];

    int k = 0;
    while (i <= end1 && j <= end2) {
        if (data[i] <= data[j]) {
            tempData[k++] = data[i++];
        } else {
            tempData[k++] = data[j++];
        }
    }

    int start = i, end = end1;
    if (j <= end2)
    {
        start = j;
        end = end2;
    }

    while (start <= end) {
        tempData[k++] = data[start++];
    }

    for (int i = 0; i <= end2 - begin1; i++) {
        data[begin1+i] = tempData[i];
    }

    delete tempData;
}
