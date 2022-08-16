//
// Created by lefeihu on 2022/8/16.
//

#ifndef CPPPROJECTS_COMPLEX_H
#define CPPPROJECTS_COMPLEX_H


#include <ostream>

class complex {

public:
    complex();

    complex(int in_real, int in_image);

    complex& operator += (const complex& in);

    inline int getReal() { return real;}

    inline int getImage() { return image;}

private:
    int real = 0;
    int image = 0;
};

inline complex operator + (complex& x, complex& y) {
    return complex(x.getReal() + y.getReal(), y.getImage() + y.getImage());
}


inline std::ostream& operator << ( std::ostream& output, complex& y) {
    output << "(" << y.getReal() << "," << y.getImage() << ")";
    return  output;
}


#endif //CPPPROJECTS_COMPLEX_H
