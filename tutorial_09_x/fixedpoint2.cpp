#include <cassert>          // for assert()
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


std::ostream& operator<<(std::ostream &out, const FixedPoint2 &x)
{
    return out << static_cast<double>(x);
}
