//
// Created by asus on 2021/10/3.
//

#include "LambdaExample.h"

#include <functional>
#include <iostream>
#include <string>
#include <vector>

void biggies(std::vector<std::string>& words, std::vector<std::string>::size_type sz) {
    auto words_over_sz = find_if(words.begin(), words.end(), [sz](const std::string& s) {
        return s.size() > sz;
    });
    std::cout << *words_over_sz << std::endl;
}

bool isOverSzLength(const std::string& s, std::string::size_type sz) {
    return s.size() > sz;
}

void biggies2(std::vector<std::string>& words, std::vector<std::string>::size_type sz) {
    auto bind_over_sz = bind(isOverSzLength, std::placeholders::_1, sz);
    auto words_over_sz = find_if(words.begin(), words.end(), bind_over_sz);
    std::cout << *words_over_sz << std::endl;
}

/*
 * [capture list] (params list) -> return type { function body }
 * [capture list] ：捕获列表，能够捕获局部作用域的变量（包含形参）以供lambda函数使用。
 * (parameters) ：参数列表，与函数的参数列表一致，若不需要参数传递，可同括号一起省略。
 * ->return-type ：返回类型。编译器会对返回类型自动推导，可以省略该部分。
 * {function body} ：函数体，跟函数一致。除了可以使用的形参之外，还可以使用所有捕获的变量，和非局部的变量。
 */

void LambdaExample::Main() {
    std::cout << "LambdaExample::Main" << std::endl;

    auto f = []{return 42;};
    std::cout << f() << std::endl;

    auto f1 = [](const std::string& a, const std::string& b)->std::string {
        if (a.size() < b.size()) {
            return a;
        }
        return b;
    };

    int sz = 3;
    auto f2 = [sz](const std::string& a)->std::string {
        if (a.size() < sz) {
            return a;
        }
        return "None";
    };
    std::vector<std::string> words;
    words.push_back("1");
    words.push_back("22");
    words.push_back("333");

//    biggies(words, 2);
    biggies2(words, 2);
}


