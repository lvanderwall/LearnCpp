#include <iostream>


// prompts user to input a double
double getDouble()
{
    std::cout << "Enter a double:\t\t\t";
    double x;
    std::cin >> x;

    return x;
}


// prompts user to input a char
char getOperator()
{
    std::cout << "Enter an operator (+, -, *, /):\t";
    char op;
    std::cin >> op;

    return op;
}


// formatted output
void printResult(double x, double y, char op)
{
    if     (op == '+') std::cout << x << " + " << y << " = " << x + y << '\n';
    else if(op == '-') std::cout << x << " - " << y << " = " << x - y << '\n';
    else if(op == '*') std::cout << x << " * " << y << " = " << x * y << '\n';
    else if(op == '/') std::cout << x << " / " << y << " = " << x / y << '\n';
}


int main()
{
    double x{ getDouble() },
           y{ getDouble() };

    char   op{ getOperator() };

    printResult(x, y, op);

    return 0;
}
