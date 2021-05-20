//
// Created by lefeihu on 2021/5/19.
//

#include "PointerClass.h"

PointerClass &PointerClass::operator=(const PointerClass &rhs) {
    ++*rhs.used;

    if (--*used = 0) {
        delete ps;
        delete used;
    }

    ps = rhs.ps;
    i = rhs.i;
    used = rhs.used;

    return *this;
}

PointerClass::~PointerClass() {
    if (--*used == 0) {
        delete ps;
        delete used;
    }
}

std::ostream &operator<<(std::ostream &os, const PointerClass &item) {
    os << "used:" << *item.used << ";ps:" << *item.ps << ";i:" << item.i;
    return os;
}
