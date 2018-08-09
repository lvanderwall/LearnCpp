#include <iostream>


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
