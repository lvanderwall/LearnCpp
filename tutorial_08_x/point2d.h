#ifndef POINT2D_H
#define POINT2D_H

// contains a point in R^2
class Point2d
{
public:
    // formatted output of Point2d() to console
    void print();

    // returns distance between two vectors using 2-norm
    // no need for two arguments, because distanceTo can access the members of the
    // object it was called from
    double distanceTo(const Point2d &p);

private:
    double m_x {0.0},
           m_y {0.0};

public:
    // default ctor without arguments, needed because another one is defined below
    Point2d() {}

    // ctor with two arguments
    Point2d(double x, double y)
        : m_x{x},
          m_y{y}
    {}
};

#endif // POINT2D_H
