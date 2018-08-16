#include <cassert>      // for assert()
#include "mystring.h"


Mystring Mystring::operator()(unsigned int start, unsigned int length)
{
    assert((start + length <= m_string.size()) && "index out of range");

    // copy substring letter by letter, initialize subString to avoid resizing
    std::string subString(length, '\0');
    while(length--) subString[length] = m_string[start + length];

    // return a temporary Mystring object using its default ctor and uniform initialization
    return Mystring{subString};

    // alternatively use std::string::substr() member function to do the same
    // return Mystring{ m_string.substr(start, length) };
}


std::ostream& operator<<(std::ostream &out, const Mystring &s)
{
    return out << s.m_string;
}
