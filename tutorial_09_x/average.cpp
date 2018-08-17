#include "average.h"


Average& Average::operator+=(int x)
{
    m_total += x;
    ++m_N;
    return *this;
}


std::ostream& operator<<(std::ostream &out, const Average &avg)
{
    // prevent integer division with static_cast
    return out << static_cast<double>(avg.m_total) / avg.m_N;
}
