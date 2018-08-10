#define quiz2

#ifdef quiz2
#include "point3d.h"    // no need to include <iostream>, Point3d handles output


int main()
{
    Point3d point;
    point.setValues(1.0, 2.0, 3.0);

    point.print();

    return 0;
}
#endif // quiz2
