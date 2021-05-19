//
// Created by lefeihu on 2021/5/14.
//

#include "OOP.h"
#include "Child1.h"

void OOP::Main() {

//    Child1* child1 = new Child1(10);
//
    std::string a("lefeihu");
//
//    child1->name = &a;
//    child1->PrintName();
//
//    Child1* child11 = child1;
//    delete child1;
//
//    child11->PrintName();

//    child1->Func1();
//    delete child1;

    Child1 child11(10);
    child11.name = &a;

    Child1 child1 = child11;
    child1.Func1();
    child1.PrintName();

    std::cout << "xxxx:" <<  a << std::endl;
}
