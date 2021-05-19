//
// Created by lefeihu on 2021/5/19.
//

#ifndef CPPLEARNING_VALUECLASS_H
#define CPPLEARNING_VALUECLASS_H


#include <string>
#include <iostream>

class ValueClass {
    friend std::ostream& operator<<(std::ostream &os, const ValueClass &item);

public:
    explicit ValueClass(const std::string &s = std::string(), const int pi = 0) : ps(new std::string(s)), i(pi){ }
    ValueClass(const ValueClass &p) : ps(new std::string(*p.ps)), i(p.i) {}
    ValueClass& operator=(const ValueClass &);
    ~ValueClass();

    std::string *ps;
    int i;
};


#endif //CPPLEARNING_VALUECLASS_H
