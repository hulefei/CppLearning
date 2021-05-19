
#ifndef CPPLEARNING_STRVEC_H
#define CPPLEARNING_STRVEC_H


#include <string>
#include <memory>
#include <iostream>


class StrVec {

    friend std::ostream& operator<<(std::ostream &os, const StrVec &item);

public:
    StrVec():elements(nullptr), first_free(nullptr), cap(nullptr) {}
    StrVec(const StrVec&);
    StrVec &operator=(const StrVec&);
    ~StrVec();

    void push_back(const std::string&);
    std::string pop_back();
    size_t size() const { return first_free - elements; }
    size_t capacity() const { return cap - elements; }

    std::string *begin() const { return elements; }
    std::string *end() const { return first_free; }

    void PrintInfo() {
        std::cout << "size:" << size() << "; capacity:" << capacity() << std::endl;
    }


private:
    std::allocator<std::string> alloc;
    void chk_n_alloc() {if (size() == capacity())  reallocate();}
    std::pair<std::string*, std::string*> alloc_n_copy(const std::string*, const std::string*);

    void free();
    void reallocate();

    std::string *elements;  //指向数组首元素的指针
    std::string *first_free; //指向数组第一个空闲元素的指针
    std::string *cap;   //指向数组尾后位置的指针
};


#endif //CPPLEARNING_STRVEC_H
