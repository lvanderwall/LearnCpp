#include <iostream>
#include "fraction.h"


void Fraction::print() const
{
    std::cout << m_num << '/' << m_den << '\n';
}


// overload operators using the friend method
Fraction operator*(const Fraction &f1, const Fraction &f2)
{
    return Fraction(f1.m_num * f2.m_num,
                    f1.m_den * f2.m_den);
}


Fraction operator*(const Fraction &f, int x)
{
    return Fraction(f.m_num * x, f.m_den);
}


Fraction operator*(int x, const Fraction &f)
{
    return f * x;
}
