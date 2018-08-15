#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>


class Fraction
{
public:
    // formatted output to console
    void print() const;

    // addition between Fraction and integer
    friend Fraction operator*(const Fraction &f1, const Fraction &f2);
    friend Fraction operator*(const Fraction &f, int x);
    friend Fraction operator*(int x, const Fraction &f);
    friend std::ostream& operator<<(std::ostream &out, const Fraction &f);
    friend std::istream& operator>>(std::istream &in, Fraction &f);

    // make gcd() static, it does not need access to members
    static int gcd(int a, int b);

private:
    int m_num,
        m_den;

    // reduces the fraction, only to be used in constructor
    void reduce();

public:
    // default ctor with default arguments using non-static member initialization
    // reduces all fractions, also in operator*() where the ctor is called
    Fraction(int num = 0, int den = 1)
        : m_num{num},
          m_den{den}
    { reduce(); }                   // assert(m_num != 0) to avoid division by zero ?
};

#endif // FRACTION_H
