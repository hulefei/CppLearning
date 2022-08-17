#include <iostream>
#include "operation/complex.h"
#include "constructor/mystring.h"

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

int mystring_main(){
    mystring s1("hello");
    std::cout << s1 << std::endl;

    mystring s3(s1);
    std::cout << s3.get_c_str() << std::endl;

    mystring s2("world");
    s3 = s2;
    std::cout << s3 << std::endl;

    return 0;
}

int main() {
//     operator_main();

     mystring_main();

     return 0;
}


