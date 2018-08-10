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

private:
    double m_x;                                     // member variables should be private
    double m_y;                                     // and have prefix "m_"
    double m_z;
};

#endif // POINT3D_H
