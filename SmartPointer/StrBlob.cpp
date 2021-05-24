//
// Created by lefeihu on 2021/5/21.
//

#include <stdexcept>
#include "StrBlob.h"

StrBlob::StrBlob(std::initializer_list<TargetClass> il) {
    data = std::make_shared<std::vector<TargetClass>>();
}

void StrBlob::pop_back() {
    check(0, "back on empty StrBlob");
    return data->pop_back();
}

TargetClass &StrBlob::front() {
    check(0, "front on empty StrBlob");
    return data->back();
}

TargetClass &StrBlob::back() {
    check(0, "back on empty StrBlob");
    return data->front();
}

StrBlob::StrBlob() {
    data = std::make_shared<std::vector<TargetClass>>();
}

void StrBlob::check(StrBlob::size_type i, const std::string &msg) const {
    if (i >= data->size())
        throw std::out_of_range(msg);
}
