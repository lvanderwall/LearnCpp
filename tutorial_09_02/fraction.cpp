#include <iostream>
#include "fraction.h"


void Fraction::print() const
{
    std::cout << m_num << '/' << m_den << '\n';
}


void Fraction::reduce()
{
    // call static functions using :: to emphasize they are static
    int g{ Fraction::gcd(m_num, m_den) };
    m_num /= g;
    m_den /= g;
}


int Fraction::gcd(int a, int b)
{
    return (b == 0) ? (a > 0 ? a : -a) : gcd(b, a % b);
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
