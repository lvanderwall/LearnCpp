#define quiz1b

#ifdef quiz1a
#include "point2d.h"


int main()
{
    Point2d first;
    Point2d second(3.0, 4.0);
    first.print();
    second.print();

    return 0;
}
#endif // quiz1a
#ifdef quiz1b
#include <iostream>
#include "point2d.h"


int main()
{
    Point2d first;
    Point2d second(3.0, 4.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';

    return 0;
}
#endif // quiz1b
