//
// Created by lefeihu on 2021/4/19.
//

#ifndef CPPLEARNING_SELECTSORT_H
#define CPPLEARNING_SELECTSORT_H


#include "SortBase.h"

class SelectSort : public SortBase{
public:
    SelectSort(int *data, int length);
    void Sort();

private:
    void Sort(int data[], int length);
};


#endif //CPPLEARNING_SELECTSORT_H
