#define quiz1

#ifdef quiz1
#include <iostream>
#include "cents.h"


int main()
{
    Cents dime(10);
    Cents nickle(5);

    if (nickle > dime)
        std::cout << "a nickle is greater than a dime.\n";
    if (nickle >= dime)
        std::cout << "a nickle is greater than or equal to a dime.\n";
    if (nickle < dime)
        std::cout << "a dime is greater than a nickle.\n";
    if (nickle <= dime)
        std::cout << "a dime is greater than or equal to a nickle.\n";

    return 0;
}
#endif // quiz1
