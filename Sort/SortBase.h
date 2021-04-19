//
// Created by lefeihu on 2021/4/19.
//

#ifndef CPPLEARNING_SORTBASE_H
#define CPPLEARNING_SORTBASE_H


class SortBase {

public:
    bool show_progress = false;

protected:
    int* data;
    int length;

public:
    SortBase() {};
    SortBase(int* data, int length);
    static void CopyArray(int* originArray, int* newArray, int length);
    static std::string ToString(int data[], int length);
};


#endif //CPPLEARNING_SORTBASE_H
