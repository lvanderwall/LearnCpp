#define quiz4b

#ifdef quiz2a
#include <iostream>
#include "average.h"


int main()
{
    Average avg;

    avg += 4;
    std::cout << avg << '\n'; // 4 / 1 = 4

    avg += 8;
    std::cout << avg << '\n'; // (4 + 8) / 2 = 6

    avg += 24;
    std::cout << avg << '\n'; // (4 + 8 + 24) / 3 = 12

    avg += -10;
    std::cout << avg << '\n'; // (4 + 8 + 24 - 10) / 4 = 6.5

    (avg += 6) += 10; // 2 calls chained together
    std::cout << avg << '\n'; // (4 + 8 + 24 - 10 + 6 + 10) / 6 = 7

    Average copy = avg;
    std::cout << copy << '\n';

    return 0;
}
#endif // quiz2a
#ifdef quiz3
#include <iostream>
#include "intarray.h"

IntArray fillArray()
{
    IntArray a(5);
    a[0] = 5;
    a[1] = 8;
    a[2] = 2;
    a[3] = 3;
    a[4] = 6;

    return a;
}

int main()
{
    IntArray a = fillArray();
    std::cout << a << '\n';

    IntArray b(1);
    a = a;
    b = a;

    std::cout << b << '\n';

    return 0;
}
#endif // quiz3
#ifdef quiz4b
#include <iostream>
#include "fixedpoint2.h"


int main()
{
    FixedPoint2 a(34, 56);
    std::cout << a << '\n';

    FixedPoint2 b(-2, 8);
    std::cout << b << '\n';

    FixedPoint2 c(2, -8);
    std::cout << c << '\n';

    FixedPoint2 d(-2, -8);
    std::cout << d << '\n';

    FixedPoint2 e(0, -5);
    std::cout << e << '\n';

    std::cout << static_cast<double>(e) << '\n';

    return 0;
}
#endif // quiz4b
