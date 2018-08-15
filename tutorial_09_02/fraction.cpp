#include <iostream>
#include "fraction.h"


void Fraction::print() const
{
    std::cout << m_num << '/' << m_den << '\n';
}
