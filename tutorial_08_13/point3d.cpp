#include <iostream>
#include "point3d.h"
#include "vector3d.h"


void Point3d::moveByVector(const Vector3d &v)
{
    m_x += v.m_x;   // Point3d is friend of Vector3d
    m_y += v.m_y;   // => Point3d has direct access to private members of Vector3d
    m_z += v.m_z;
}


void Point3d::print()
{
    std::cout << "Point(" << m_x << " , " << m_y << " , " << m_z << ")\n";
}
