#ifndef FIXEDPOINT2_H
#define FIXEDPOINT2_H

#include <iostream>
#include <cstdint>      // for std::int8_t, std::int16_t


class FixedPoint2
{
public:
    // standard math operators
    FixedPoint2 operator-() const;
    friend FixedPoint2 operator+(const FixedPoint2 &x, const FixedPoint2 &y);

    // compare base and decimals
    friend bool operator==(const FixedPoint2 &x, const FixedPoint2 &y);

    // formatted output to console
    friend std::ostream& operator<<(std::ostream &out, const FixedPoint2 &x);

    // prompts user to enter a fixed point number (format: BASE.DECIMALS)
    friend std::istream& operator>>(std::istream &in, FixedPoint2 &x);


private:
    std::int16_t m_b;   // base, the whole part
    std::int8_t  m_d;   // decimal, the fractional part

public:
    // default ctor with default arguments, decimal and fractional get the same sign
    FixedPoint2(std::int16_t b = 0, std::int8_t d = 0);

    // round double to fixed point with two decimals
    FixedPoint2(double d);

    // type cast to double (use implicit cast from int to double)
    explicit operator double() const { return m_b + m_d / 100.0; }
};

#endif // FIXEDPOINT2_H
