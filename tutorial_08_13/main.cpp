#define quiz1a

#ifdef quiz1a
#include <iostream>

// class Point3d;   // when making a class a friend of another, you only need a
                    // forward declaration when they are in different namespaces

class Vector3d
{
private:
    double m_x, m_y, m_z;

public:
    Vector3d(double x = 0.0, double y = 0.0, double z = 0.0)
        : m_x(x), m_y(y), m_z(z)
    {

    }

    void print()
    {
        std::cout << "Vector(" << m_x << " , " << m_y << " , " << m_z << ")\n";
    }

    friend class Point3d;   // Point3d is now a friend of Vector3d
};

class Point3d
{
private:
    double m_x, m_y, m_z;

public:
    Point3d(double x = 0.0, double y = 0.0, double z = 0.0)
        : m_x(x), m_y(y), m_z(z)
    {

    }

    void print()
    {
        std::cout << "Point(" << m_x << " , " << m_y << " , " << m_z << ")\n";
    }

    void moveByVector(const Vector3d &v)
    {
        m_x += v.m_x;   // Point3d is friend of Vector3d
        m_y += v.m_y;   // => Point3d has direct access to private members of Vector3d
        m_z += v.m_z;
    }
};

int main()
{
    Point3d p(1.0, 2.0, 3.0);
    Vector3d v(2.0, 2.0, -3.0);

    p.print();
    p.moveByVector(v);
    p.print();

    return 0;
}
#endif // quiz1a
