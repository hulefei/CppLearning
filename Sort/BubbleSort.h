//
// Created by lefeihu on 2021/4/19.
//

#ifndef CPPLEARNING_BUBBLESORT_H
#define CPPLEARNING_BUBBLESORT_H


#include "SortBase.h"

class BubbleSort : public SortBase {

public:
    BubbleSort(int *data1, int length1);
    void Sort();

private:
    void Sort(int data[], int length);
};


#endif //CPPLEARNING_BUBBLESORT_H
