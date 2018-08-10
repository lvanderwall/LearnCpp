#ifndef POINT3D_H
#define POINT3D_H

#include <iostream>


class Point3d                                       // class name in capital letters
{
public:
    // sets all members
    void setValues(double x, double y, double z)    // public member function
    {
        m_x = x;
        m_y = y;
        m_z = z;
    }

    // formatted output of members
    void print()
    {
        std::cout << '<' << m_x << ", " << m_y << ", " << m_z << ">\n";
    }

    // is equal iff this Point3d object is identical to other Point3d object p
    bool isEqual(const Point3d &p)                  // use call by (const) reference to avoid copying an object
    {
        // this object can access p.m_x, because private members can be accessed
        // by ANY object of the same class
        return( (m_x == p.m_x) && (m_y == p.m_y) && (m_z == p.m_z) );
    }

private:
    double m_x;                                     // member variables should be private
    double m_y;                                     // and have prefix "m_"
    double m_z;
};

#endif // POINT3D_H
