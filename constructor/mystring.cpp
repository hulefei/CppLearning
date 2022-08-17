//
// Created by lefeihu on 2022/8/16.
//

#include <cstring>
#include "mystring.h"

mystring::mystring(const char *cstr) {
    if (cstr) {
        m_data = new char[strlen(cstr) + 1];
        strcpy(m_data, cstr);
    } else {
        m_data = new char[1];
        *m_data = '\0';
    }
}

mystring::mystring(const mystring& str){
    m_data = new char[strlen(str.get_c_str()) + 1];
    strcpy(m_data, str.get_c_str());
}

mystring& mystring::operator= (const mystring& str) {
    if (this == &str)
        return *this;

    delete m_data;
    m_data = new char[strlen(str.get_c_str()) + 1];
    strcpy(m_data, str.get_c_str());

    return *this;
}

mystring::~mystring(){
    delete m_data;
}
