//
// Created by lefeihu on 2021/4/19.
//
#include <iostream>

#include "BubbleSort.h"

void BubbleSort::Sort() {
    int* newData = new int[9];
    CopyArray(data, newData, length);
    Sort(newData, length);
    delete newData;
}

void BubbleSort::Sort(int *data, int length) {
    std::cout << "BubbleSort:" << ToString(data, length) << std::endl;

    //BubbleSort
    for (int i = 0; i < length; i++) {
        bool ValueChanged = false;
        for (int j = 1; j < length - i; j++) {
            if (data[j - 1] > data[j]) {
                int tmp = data[j];
                data[j] = data[j - 1];
                data[j - 1] = tmp;

                ValueChanged = true;
            }
        }

        if (show_progress)
            std::cout << ToString(data, length) << std::endl;

        //一次完整冒泡没有数据变化，说明已经是有序的了
        if (!ValueChanged) break;
    }

    std::cout << "BubbleSort Result:" << ToString(data, length) << std::endl;
}

BubbleSort::BubbleSort(int *data, int length) : SortBase(data, length) {

}
