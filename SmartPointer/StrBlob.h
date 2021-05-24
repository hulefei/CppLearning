//
// Created by lefeihu on 2021/5/21.
//

#ifndef CPPLEARNING_STRBLOB_H
#define CPPLEARNING_STRBLOB_H


#include <string>
#include <vector>
#include <memory>
#include "TargetClass.h"

class StrBlob {
public:
    typedef std::vector<TargetClass>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<TargetClass> il);
    size_type size() const { return data->size(); }
    void push_back(const TargetClass &t) { data->push_back(t); }
    void pop_back();
    TargetClass& front();
    TargetClass& back();

private:
    std::shared_ptr<std::vector<TargetClass>> data;
    void check(size_type i, const std::string &msg) const;
};


#endif //CPPLEARNING_STRBLOB_H
