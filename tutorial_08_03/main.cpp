#define quiz3

#ifdef quiz2
#include "point3d.h"    // no need to include <iostream>, Point3d handles output


int main()
{
    Point3d point1;
    point1.setValues(1.0, 2.0, 3.0);

    Point3d point2;
    point2.setValues(1.0, 2.0, 3.0);

    if (point1.isEqual(point2))
        std::cout << "point1 and point2 are equal\n";
    else
        std::cout << "point1 and point2 are not equal\n";

    Point3d point3;
    point3.setValues(3.0, 4.0, 5.0);

    if (point1.isEqual(point3))
        std::cout << "point1 and point3 are equal\n";
    else
        std::cout << "point1 and point3 are not equal\n";

    return 0;
}
#endif // quiz2
#ifdef quiz3
#include "stack.h"


int main()
{
    Stack stack;
    stack.reset();

    stack.print();

    stack.push(5);
    stack.push(3);
    stack.push(8);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();

    stack.print();

    return 0;
}
#endif // quiz3
