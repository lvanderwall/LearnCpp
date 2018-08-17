#include <cassert>      // for assert()
#include "intarray.h"


int& IntArray::operator[](const int idx)
{
    assert(0 <= idx && "invalid index");
    assert(idx < m_length && "invalid index");
    return m_array[idx];
}


int IntArray::operator[](const int idx) const
{
    assert((0 <= idx) && (idx < m_length) && "invalid index");
    return m_array[idx];
}


std::ostream& operator<<(std::ostream& out, const IntArray &a)
{
    // cannot use a for-each loop, because we loop through dynamic array
    for(int i{0}; i < a.m_length; ++i)
        out << a[i] << ' ';             // out << a.m_array[i] << ' ';

    return out;
}


IntArray::IntArray(int length)
    : m_length{length}
{
    assert(m_length > 0 && "invalid array length");
    m_array = new int[m_length] {};     // uniform initialization to 0
}


IntArray::IntArray(const IntArray& a)
    : m_length{a.m_length},
      m_array{ new int[a.m_length] }    // a is a valid IntArray and has positive length
{
    for(int i{0}; i < m_length; ++i)    // deep copy
        m_array[i] = a.m_array[i];
}


IntArray& IntArray::operator=(const IntArray& a)
{
    if(this == &a) return *this;        // prevent copying in self-assignments

    m_length = a.m_length;              // set new length

    delete[] m_array;                   // free old memory
    m_array = new int[m_length];        // allocate new memory

    for(int i{0}; i < m_length; ++i)    // deep copy
        m_array[i] = a.m_array[i];

    return *this;                       // make assignments chain-able
}
