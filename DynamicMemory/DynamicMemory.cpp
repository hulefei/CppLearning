//
// Created by lefeihu on 2021/5/18.
//

#include <iostream>
#include "DynamicMemory.h"
#include "StrVec.h"
#include "ValueClass.h"

void ValueClassTest() {
    ValueClass valueClass("lefeihu", 100);
    auto valueClass2 = valueClass;
    valueClass2.ps = new std::string("lefeihu2");
    valueClass2.i = 200;

    std::cout << valueClass << std::endl;
    std::cout << valueClass2 << std::endl;
}

void DynamicMemory::Main() {
    StrVec strVec;

    ValueClassTest();
}
