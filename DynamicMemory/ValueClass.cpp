//
// Created by lefeihu on 2021/5/19.
//

#include "ValueClass.h"

ValueClass &ValueClass::operator=(const ValueClass &rhs) {
    auto newp = new std::string(*rhs.ps); //拷贝底层string
    delete rhs.ps; //释放旧内存
    ps = newp; //从右侧运算对象拷贝数据到本对象
    i = rhs.i;

    return *this; //返回本对象
}

std::ostream &operator<<(std::ostream &os, const ValueClass &item) {
    os << "i:" << item.i << "; ps:" << *item.ps;
    return os;
}

ValueClass::~ValueClass() {
    delete ps;

    std::cout << "~ValueClass" << std::endl;
}
