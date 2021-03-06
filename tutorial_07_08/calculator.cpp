#include <iostream>
#include "calculator.h"     // for arithmeticFcn


int getInt()
{
    int x{0};
    bool cinFail{false};
    while(1) {
        std::cout << "Enter an integer:\t\t";
        std::cin >> x;
        if( (cinFail = std::cin.fail()) ) std::cin.clear();

        std::cin.ignore(32767, '\n');
        if(!cinFail) return x;
    }
}


char getOperator()
{
    char op{'\0'};
    bool cinFail{false};
    while(1) {
        std::cout << "Enter an operator (+ - * /):\t";
        std::cin >> op;
        if( (cinFail = std::cin.fail()) ) std::cin.clear();

        std::cin.ignore(32767, '\n');
        if( !cinFail && ((op == '+') || (op == '-')
                                     || (op == '*') || (op == '/')) ) return op;
    }
}


int add(int x, int y)
{
    return x + y;
}


int subtract(int x, int y)
{
    return x - y;
}


int multiply(int x, int y)
{
    return x * y;
}


int divide(int x, int y)
{
    return x / y;
}


arithmeticFcn getArithmeticFuntion(char op)
{
    for(const auto &opStruct: arthmeticArray)
        if(opStruct.op == op) return opStruct.p;

    return nullptr;         // invalid operator
}
