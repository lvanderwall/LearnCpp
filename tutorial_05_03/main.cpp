#define quiz1

#ifdef quiz1
#include <iostream>


// calculates "x op y"
int calculate(int x, int y, char op)
{
    switch(op) {
        case '+': return x + y;
        case '-': return x - y;
        case '*': return x * y;
        case '/': return x / y;     // meaning integer division
        case '%': return x % y;
        default:
            std::cout << "Invalid operator " << op << "!\n";
            return -1;
    }
}


// prompts user to enter an integer
int getInt()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;
    std::cin.ignore(32767, '\n');   // discard chars until (including) next \n
    return x;
}


// prompts user to enter the operator
char getOperator()
{
    std::cout << "Enter an operator (+, -, *, / %): ";
    char op;
    std::cin >> op;
    std::cin.ignore(32747, '\n');   // discard chars until (including) next \n
    return op;
}

int main()
{
    int
        x = getInt(),
        y = getInt();

    char op = getOperator();

    // output result
    std::cout << x << ' ' << op << ' ' << y << " = " << calculate(x, y, op) << '\n';

    return 0;
}
#endif // quiz1
