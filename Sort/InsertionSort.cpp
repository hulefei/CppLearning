//
// Created by lefeihu on 2021/4/19.
//

#include <iostream>
#include "InsertionSort.h"

InsertionSort::InsertionSort(int *data, int length) : SortBase(data, length) {

}

void InsertionSort::Sort() {
    int* newData = new int[length];
    CopyArray(data, newData, length);
    Sort(newData, length);
    delete newData;
}

void InsertionSort::Sort(int *data, int length) {
    std::cout << "InsertionSort:" << ToString(data, length) << std::endl;

    for (int i = 1; i < length; i++) {
        int currentValue = data[i];
        int j = i;
        for (; j > 0; j--) {
            if (currentValue < data[j - 1] ) {
                data[j] = data[j - 1];
            } else {
                break;
            }
        }
        data[j] = currentValue;

        if (show_progress)
            std::cout << ToString(data, length) << std::endl;
    }

    std::cout << "InsertionSort Result:" << ToString(data, length) << std::endl;
}
