#ifndef MYSTRING_H
#define MYSTRING_H

#include <string>   // for std::string


class Mystring
{
public:
    // return by value to create a new string object containing the substring
    Mystring operator()(unsigned int index, unsigned int length);

    // formatted output to console
    friend std::ostream& operator<<(std::ostream &out, const Mystring &s);

private:
    std::string m_string;

public:
    // default ctor with default parameters
    Mystring(const std::string &s = "")
        : m_string{s}
    {}
};

#endif // MYSTRING_H
