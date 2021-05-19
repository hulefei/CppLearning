//
// Created by lefeihu on 2021/5/14.
//

#include "Child1.h"

Child1::Child1(int paramAge):age(paramAge) {
    std::cout << "child1 constructor" <<std::endl;
}

Child1::~Child1() {
    std::cout << "child1 destructor" <<std::endl;
}

Child1::Child1(const Child1 &child1):age(child1.age),name(child1.name) {
    std::cout << "Child1 copy Constructor" <<std::endl;
}

void Child1::PrintAge() {
    std::cout << "PrintAge:" << age <<std::endl;
}

void Child1::PrintName() {
    std::cout << "PrintName:" << *name <<std::endl;
}

Child1 &Child1::operator=(const Child1 &child1) {

    std::cout << "Child1 operator=" <<std::endl;

    age = child1.age;
    name = child1.name;

    return *this;
}
