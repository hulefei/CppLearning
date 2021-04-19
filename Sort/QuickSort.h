//
// Created by lefeihu on 2021/4/19.
//

#ifndef CPPLEARNING_QUICKSORT_H
#define CPPLEARNING_QUICKSORT_H


#include "SortBase.h"

class QuickSort : public SortBase {
public:
    QuickSort(int *data, int length);
    void Sort();

private:
    void Sort(int data[], int length);
    int Partition(int *data, int begin, int end);
    void QuickSortC(int data[], int begin, int end);
};


#endif //CPPLEARNING_QUICKSORT_H
