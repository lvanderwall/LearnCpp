#include <iostream>     // for std::cin, std::cout and std::endl


int readNumber()
{
    std::cout << "Enter an integer: ";

    int x;
    std::cin >> x;

    return x;
}


void writeAnswer(int x)
{
    std::cout << "The answer is: " << x << std::endl;
}
