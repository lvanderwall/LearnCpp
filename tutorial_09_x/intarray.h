#ifndef INTARRAY_H
#define INTARRAY_H

#include <iostream>

class IntArray
{
public:
    // set and get array elements
    int& operator[](const int idx);
    int  operator[](const int idx) const;

    // print formatted array to console
    friend std::ostream& operator<<(std::ostream& out, const IntArray &a);

private:
    int m_length = 0;
    int *m_array = nullptr;

public:
    // default ctor, allocate memory for m_array
    IntArray(int length);

    // user defined copy ctor, needed to define deep copying
    IntArray(const IntArray &a);

    // user defined dtor
    ~IntArray() { delete[] m_array; }

    // user defined operator=(), needed to handle self-assignment and/or deep copying
    IntArray& operator=(const IntArray &a);
};

#endif // INTARRAY_H
