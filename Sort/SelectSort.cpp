//
// Created by lefeihu on 2021/4/19.
//

#include <iostream>
#include "SelectSort.h"

SelectSort::SelectSort(int *data, int length) : SortBase(data, length) {

}

void SelectSort::Sort() {
    int* newData = new int[length];
    CopyArray(data, newData, length);
    Sort(newData, length);
    delete newData;
}

void SelectSort::Sort(int *data, int length) {
    std::cout << "SelectSort:" << ToString(data, length) << std::endl;

    for (int i = 0; i < length - 1; i++) {
        int MinIndex = i;
        for (int j = i + 1; j < length; j++) {
            if (data[MinIndex] > data[j]) {
                MinIndex = j;
            }
        }
        if (i != MinIndex) {
            int tmp = data[i];
            data[i] = data[MinIndex];
            data[MinIndex] = tmp;
        }

        if (show_progress)
            std::cout << ToString(data, length) << std::endl;
    }

    std::cout << "SelectSort Result:" << ToString(data, length) << std::endl;
}
