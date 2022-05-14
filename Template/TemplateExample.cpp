//
// Created by LEFEIHU on 2021/10/31.
//

#include <iostream>
#include <vector>
#include "TemplateExample.h"
#include "Sales_data.h"

template <typename T>
int compare(const T &v1, const T &v2) {
    if (v1 < v2) return -1;
    if (v2 > v1) return 1;
    return 0;
}

template <unsigned N, unsigned M>
int compare(const char (&p1)[N], const char (&p2)[M]) {
    return strcmp(p1, p2);
}

template <typename T1, typename T2>
int find (T1 it, T2 value) {
    for(auto i = it.begin(); i != it.end(); ++i) {
        if (*i == value) return 1;
    }
    return 0;
}

template <typename T>
void print (T &array) {
    for(auto& a :array) {
        std::cout << a << std::endl;
    }
}

template <typename T, unsigned N>
T* mybegin(T (&arr)[N]) {
    return arr;
}

template <typename T, unsigned N>
T* myend(T (&arr)[N]) {
    return arr + N;
}

TemplateExample::TemplateExample() {

}

void TemplateExample::Main() {
    std::cout << "TemplateExample" << std::endl;

    {
        auto r1 = compare(1,2);
        auto r2 = compare(2.0f, 3.0f);
        std::cout << "r1:" << r1 << std::endl;
        std::cout << "r2:" << r2 << std::endl;
    }

    {
        std::vector<int> vec1;
        vec1.push_back(1);
        vec1.push_back(2);
        vec1.push_back(3);

        auto r1 = find(vec1, 1);
        auto r2 = find(vec1, 4);
        std::cout << "r1:" << r1 << std::endl;
        std::cout << "r2:" << r2 << std::endl;
    }

    {
        int a[] = {1,2,3,4};
        std::string b[] = {"a", "b", "c"};
        print(a);
        print(b);
    }

    {
        std::cout << std::endl;
        int a[] = {1,2,3,4};
        std::string b[] = {"a", "b", "c"};

        for (auto i = mybegin(a); i != myend(a) ; ++i) {
            std::cout << *i << std::endl;
        }

        for (auto i = mybegin(b); i != myend(b) ; ++i) {
            std::cout << *i << std::endl;
        }
    }
}
