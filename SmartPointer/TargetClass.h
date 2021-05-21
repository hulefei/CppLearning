//
// Created by lefeihu on 2021/5/21.
//

#ifndef CPPLEARNING_TARGETCLASS_H
#define CPPLEARNING_TARGETCLASS_H


class TargetClass {
public:
    explicit TargetClass() : value(0) {}
    explicit TargetClass(int v) : value(v) {}
    ~TargetClass();

    int value;
};


#endif //CPPLEARNING_TARGETCLASS_H
