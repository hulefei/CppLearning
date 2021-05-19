//
// Created by lefeihu on 2021/5/18.
//

#include "StrVec.h"

std::string StrVec::pop_back() {

    auto p = --first_free;

    auto result = std::string(*p);

    alloc.destroy(p);

    return result;
}

void StrVec::push_back(const std::string &s) {
    chk_n_alloc();
    alloc.construct(first_free++, s);
}

StrVec::StrVec(const StrVec &s) {
    auto newData = alloc_n_copy(s.begin(), s.end());
    elements = newData.first;
    first_free = cap = newData.second;
}

StrVec &StrVec::operator=(const StrVec &rhs) {
    auto data = alloc_n_copy(rhs.begin(), rhs.end());
    free();
    elements = data.first;
    first_free = cap = data.second;
    return *this;
}

std::pair<std::string *, std::string *> StrVec::alloc_n_copy(const std::string *b, const std::string *e) {
    //分配空间保存给定范围中的元素
    std::string *data = alloc.allocate(e - b);
    //初始化并返回一个pair，该pair由data和uninitialized_copy的返回值构成
    return {data, uninitialized_copy(b, e, data)};
}

void StrVec::free() {
    if (elements){
        for (auto p = first_free;  p != elements ; ) {
            alloc.destroy(--p);
        }
        alloc.deallocate(elements, cap - elements);
    }
}

void StrVec::reallocate() {
    std::cout << "reallocate" << std::endl;
    auto newCapacity = size() ? 2 * size() : 1;
    auto newData = alloc.allocate(newCapacity);
    auto dest = newData;
    auto elem = elements;
    for (size_t i = 0; i != size(); ++i) {
        alloc.construct(dest++, std::move(*elem++));
    }
    free();
    elements = newData;
    first_free = dest;
    cap = elements + newCapacity;
}

StrVec::~StrVec() {
    free();
}

std::ostream &operator<<(std::ostream &os, const StrVec &item) {

    os << "size:" << item.size() << "; capacity:" << item.capacity();
    return os;
}


