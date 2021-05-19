//
// Created by lefeihu on 2021/5/14.
//

#ifndef CPPLEARNING_CHILD1_H
#define CPPLEARNING_CHILD1_H

#include <iostream>
#include "Parent.h"

class Child1 : public Parent{

public:
    explicit Child1(int paramAge);
    ~Child1();
    Child1(const Child1& child1);

    Child1& operator=(const Child1& child1);

    void PrintAge();
    void PrintName();

public:
    int age;
    std::string* name;
};


#endif //CPPLEARNING_CHILD1_H
