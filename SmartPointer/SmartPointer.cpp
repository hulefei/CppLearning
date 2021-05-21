//
// Created by lefeihu on 2021/5/21.
//

#include <iostream>
#include <memory>
#include "SmartPointer.h"
#include "TargetClass.h"

void SmartPointer::Main() {

    std::shared_ptr<TargetClass> sharedPtr = std::make_shared<TargetClass>(100);
    std::cout << sharedPtr->value << std::endl;

    std::shared_ptr<TargetClass> sharedPtr2(new TargetClass(100));
    std::cout << sharedPtr2->value << std::endl;

//    auto targetClass = new TargetClass();
//    std::cout << targetClass->value << std::endl;
}
