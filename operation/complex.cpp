//
// Created by lefeihu on 2022/8/16.
//

#include "complex.h"

complex operator + (const complex& x, const complex& y);

complex::complex(int in_real, int in_image) : real(in_real), image(in_image) {

}

complex::complex() {

}

complex& complex::operator += (const complex& in) {
    real = real + in.real;
    image = image + in.image;
    return *this;
}
