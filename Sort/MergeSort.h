//
// Created by lefeihu on 2021/4/19.
//

#ifndef CPPLEARNING_MERGESORT_H
#define CPPLEARNING_MERGESORT_H


#include "SortBase.h"

class MergeSort : public SortBase {
public:
    MergeSort(int *data, int length);
    void Sort();

private:
    void Sort(int data[], int length);
    void Merge(int data[],  int begin1, int end1, int begin2, int end2);
    void MergeSortC(int data[], int begin, int end);
};


#endif //CPPLEARNING_MERGESORT_H
