#define quiz2

#ifdef quiz2
#include <iostream>
#include "calculator.h"


int main()
{
    int x{ getInt() };
    char op{ getOperator() };
    int y{ getInt() };

    std::cout << "---------------------------------\n";
//    std::cout << x << ' ' << op << ' ' << y << " =\t\t\t\t"   // use explicit derefencing
//              << (*getArithmeticFuntion(op))(x, y) << '\n';
    std::cout << x << ' ' << op << ' ' << y << " =\t\t\t\t"
              << getArithmeticFuntion(op)(x, y) << '\n';
    return 0;
}
#endif // quiz2
