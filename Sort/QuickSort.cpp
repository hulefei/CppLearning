//
// Created by lefeihu on 2021/4/19.
//

#include <iostream>
#include "QuickSort.h"

QuickSort::QuickSort(int *data, int length) : SortBase(data, length) {

}

void QuickSort::Sort() {
    int* newData = new int[length];
    CopyArray(data, newData, length);
    Sort(newData, length);
    delete newData;
}

void QuickSort::Sort(int data[], int length) {
    std::cout << "QuickSort:" << ToString(data, length) << std::endl;

    QuickSortC(data, 0, length - 1);

    std::cout << "QuickSort Result:" << ToString(data, length) << std::endl;
}

int QuickSort::Partition(int *data, int begin, int end) {
    if (show_progress) {
        for (int i = 0; i < length; i++) {
            if (i == begin) {
                printf("[");
            }

            if (i == length - 1) {
                printf("%d", data[i]);
            } else {
                printf("%d,", data[i]);
            }

            if (i == end) {
                printf("]");
            }

            if (i == length - 1) printf("\n");
        }
    }

    int i = begin;
    int pivot = data[end];

    for (int j = begin; j < end; j++) {
        if (data[j] < pivot) {
            if (i != j) {
                int tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
            i++;
        }
    }

    if (i != end) {
        int tmp = data[i];
        data[i] = data[end];
        data[end] = tmp;
    }

    return i;
}

void QuickSort::QuickSortC(int *data, int begin, int end) {
    if (begin >= end) return;

    int partitionIndex = Partition(data, begin, end);
    QuickSortC(data, begin, partitionIndex - 1);
    QuickSortC(data, partitionIndex + 1, end);
}
