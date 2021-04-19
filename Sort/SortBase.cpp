//
// Created by lefeihu on 2021/4/19.
//

#include <iostream>

#include "SortBase.h"
#include "string"

SortBase::SortBase(int *data, int length) : data(data),length(length) {

}

void SortBase::CopyArray(int* originArray, int* newArray, int length) {
    for (int i = 0; i < length; i++) {
        newArray[i] = originArray[i];
    }
}

std::string SortBase::ToString(int data[], int length)
{
    std::string Result;
    for (int i = 0; i < length; i++)
    {
        Result.append(std::to_string(data[i]));
        if (i != length - 1) Result.append(",");
    }

    return Result;
}
