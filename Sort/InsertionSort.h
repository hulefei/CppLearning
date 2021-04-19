//
// Created by lefeihu on 2021/4/19.
//

#ifndef CPPLEARNING_INSERTIONSORT_H
#define CPPLEARNING_INSERTIONSORT_H


#include "SortBase.h"

class InsertionSort : public SortBase{
public:
    InsertionSort(int *data, int length);
    void Sort();

private:
    void Sort(int data[], int length);
};


#endif //CPPLEARNING_INSERTIONSORT_H
