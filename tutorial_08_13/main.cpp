#define quiz1c

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
#ifdef quiz1b
#include <iostream>

class Vector3d; // Point3d uses Vector3d

class Point3d   // reorder classes: Vector3d needs complete definition of Point3d
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

    // use forward declaration, moveByVector() needs complete definition of Vector3d
    void moveByVector(const Vector3d &v);
};

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

    // Point3d::moveByVector() is now a friend of Vector3d
    friend void Point3d::moveByVector(const Vector3d &v);
};

// now that Vector3d is fully defined, we can define moveByVector
void Point3d::moveByVector(const Vector3d &v)
{
    m_x += v.m_x;   // Point3d is friend of Vector3d
    m_y += v.m_y;   // => Point3d has direct access to private members of Vector3d
    m_z += v.m_z;
}

int main()
{
    Point3d p(1.0, 2.0, 3.0);
    Vector3d v(2.0, 2.0, -3.0);

    p.print();
    p.moveByVector(v);
    p.print();

    return 0;
}
#endif // quiz1b
#ifdef quiz1c
#include "point3d.h"
#include "vector3d.h"


int main()
{
	Point3d p(1.0, 2.0, 3.0);
	Vector3d v(2.0, 2.0, -3.0);

	p.print();
	p.moveByVector(v);
	p.print();

	return 0;
}
#endif // quiz1c
