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
