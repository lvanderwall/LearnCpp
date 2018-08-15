#include "cents.h"


bool operator>(const Cents &c1, const Cents &c2)
{
    return c1.m_cents > c2.m_cents;
}

bool operator>=(const Cents &c1, const Cents &c2)
{
    return c1.m_cents >= c2.m_cents;
}

// Recall: "less than" <=> "not (greater or equal to)"
bool operator<(const Cents &c1, const Cents &c2)
{
    return !(c1 >= c2);
}

// Recall: "less or equal to" <=> "not (greater than)"
bool operator<=(const Cents &c1, const Cents &c2)
{
    return !(c1 > c2);
}
