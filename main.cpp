#include <iostream>
#include "operation/complex.h"

int operator_main(){
    complex c1(1, 7);
    complex c2;
    complex();
    complex(4, 5);

    c1 += c2;

    auto c3 = c1 + c2;

    std::cout << c1;
    std::cout << c2;
    std::cout << c3;

    return 0;
}

int main() {
    return operator_main();
}


