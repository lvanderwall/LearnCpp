#include <iostream>     // for std::cin, std::cout and std::endl


// read one integer from console
int readNumber()
{
    std::cout << "Enter an integer: ";

    int x;
    std::cin >> x;

    return x;
}


// print output line
void writeAnswer(int x)
{
    std::cout << "The answer is: " << x << std::endl;
}


int main()
{
    int x = readNumber();
    int y = readNumber();

    writeAnswer(x + y);

    return 0;
}
