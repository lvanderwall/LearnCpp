#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
public:
    // formatted output to console
    void print() const;

private:
    int m_num,
        m_den;

public:
    // default ctor with default arguments using non-static member initialization
    Fraction(int num = 0, int den = 1)
        : m_num{num},
          m_den{den}
    {}
};

#endif // FRACTION_H
