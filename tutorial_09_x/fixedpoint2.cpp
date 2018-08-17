#include <cassert>          // for assert()
#include <cmath>            // for round()
#include <cstdint>          // for std::int8_t, std::int16_t
#include <iostream>
#include "fixedpoint2.h"


FixedPoint2::FixedPoint2(std::int16_t b, std::int8_t d)
    : m_b{b},
      m_d{d}
{
    assert(d <= 99  && "decimal out of range");
    assert(d >= -99 && "decimal out of range");

    if((b < 0) || (d < 0)) {    // d, f have different signs => treated as negative
        if(b > 0) m_b = -b;     // make d, f both negative
        if(d > 0) m_d = -d;
    }
}


/*
get the fractional part of double d in three steps:
1.) get integer part b
2.) get fractional part f = d - b
3.) get first two digits of fractional: round(100 * f)
*/
FixedPoint2::FixedPoint2(double d)
    : FixedPoint2(              // use delegating constructors
          static_cast<std::int16_t>(d),
          static_cast<std::int8_t>( round((d - static_cast<std::int16_t>(d)) * 100.0) )
      )
{}


std::ostream& operator<<(std::ostream &out, const FixedPoint2 &x)
{
    return out << static_cast<double>(x);
}
