#include <iostream>
#include <cmath>
#include "point2d.h"


void Point2d::print()
{
    std::cout << "Point2d(" << m_x << ", " << m_y << ")\n";
}


double Point2d::distanceTo(const Point2d& p)
{
    return sqrt( (m_x - p.m_x) * (m_x - p.m_x) +
                 (m_y - p.m_y) * (m_y - p.m_y) );
}
