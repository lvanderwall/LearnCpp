#ifndef POINT3D_H
#define POINT3D_H

/*
#include "vector3d.h" instead of or before forward declaration will NOT do the
job: point3d.h and vector3d.h would include each other respectively, and (because
of header guards) the following happens:

point3d.h:
 - point3d.h defines POINT3D_H
 - point3d.h includes vector3d.h and defines VECTOR3D_H
 - vector3d.h would include point3d.h but cannot, because POINT3D_H is already defined
 - class Vector3d {} does not know about class Point3d, because the preprocessor
   has included Vector3d's definition before Point3d  =>  compiler error!

vector3d.h:
 - vector3d.h defines VECTOR3D_H
 - vector3d.h includes point3d.h and defines POINT3D_H
 - point3d.h would include vector3d.h but cannot, because VECTOR3D_H is already defined
 - with forward declaration: class Point3d {} sees forward declaration of Vector3d
   w/o forward declaration: class Point3d does not know about class Vector3d, because
   the preprocessor has included Point3d's definition before Vector3d  =>  compiler error
*/
class Vector3d; // forward declaration for moveByVector()


class Point3d
{
private:
    double m_x, m_y, m_z;

public:
    Point3d(double x = 0.0, double y = 0.0, double z = 0.0)
        : m_x(x), m_y(y), m_z(z)
    {

    }

    void print();

    void moveByVector(const Vector3d &v);
};

#endif // POINT3D_H
