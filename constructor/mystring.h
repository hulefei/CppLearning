//
// Created by lefeihu on 2022/8/16.
//

#ifndef CPPPROJECTS_MYSTRING_H
#define CPPPROJECTS_MYSTRING_H


#include <ostream>

class mystring {

public:
    mystring(const char* cstr);
    mystring(const mystring& str);
    mystring& operator= (const mystring& str);
    ~mystring();
    inline char* get_c_str() const { return m_data;}
private:
    char* m_data;
};

inline std::ostream& operator << (std::ostream& output, mystring& str) {
    output << str.get_c_str();
    return output;
}

#endif //CPPPROJECTS_MYSTRING_H
