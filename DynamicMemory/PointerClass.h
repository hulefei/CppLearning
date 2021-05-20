//
// Created by lefeihu on 2021/5/19.
//

#ifndef CPPLEARNING_POINTERCLASS_H
#define CPPLEARNING_POINTERCLASS_H


#include <string>
#include <iostream>

class PointerClass {
    friend std::ostream& operator<<(std::ostream &os, const PointerClass &item);

public:
    explicit PointerClass(const std::string &s = std::string()) : ps(new std::string(s)), i(0), used(new std::size_t(1)) { }

    PointerClass(const PointerClass &p) : ps(p.ps), i(p.i), used(p.used) { ++*used; }
    PointerClass& operator=(const PointerClass&);
    ~PointerClass();

    std::string *ps;
    int i;
    std::size_t *used;
};


#endif //CPPLEARNING_POINTERCLASS_H
