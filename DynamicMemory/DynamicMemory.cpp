//
// Created by lefeihu on 2021/5/18.
//

#include <iostream>
#include "DynamicMemory.h"
#include "StrVec.h"
#include "ValueClass.h"
#include "PointerClass.h"

void ValueClassTest();
void StrVecTest();
void PointerClassTest();

void DynamicMemory::Main() {
//    ValueClassTest();
//    StrVecTest();

    PointerClassTest();
}

void StrVecTest() {

    std::cout << "StrVecTest================" << std::endl;

    StrVec strVec;
    for (int i = 0; i < 8; i++) {
        strVec.push_back(std::to_string(i));
        std::cout << strVec << std::endl;
    }

    auto value = strVec.pop_back();
    std:: cout << "value:" << value << std::endl;
    std::cout << strVec;
}

void ValueClassTest() {

    std::cout << "ValueClassTest================" << std::endl;

    ValueClass valueClass("lefeihu", 100);
    auto valueClass2 = valueClass;
    valueClass2.ps = new std::string("lefeihu2");
    valueClass2.i = 200;

    std::cout << valueClass << std::endl;
    std::cout << valueClass2 << std::endl;
}

void PointerClassTest() {

    std::cout << "PointClassTest================" << std::endl;

    PointerClass p1("Hiya");
    std::cout << p1 << std::endl;

    PointerClass p2(p1);
    std::cout << p2 << std::endl;
}


