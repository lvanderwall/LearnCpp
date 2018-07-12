#include <iostream>     // for std::cin, std::cout (standard in-/ output) and std::endl


// doubles input value
int doubleNumber(int x)
{
    return 2 * x;
}


int main()              // every program needs to have one function "int main()"
{
    // define an integer variable
    int i;

    // reads one int from the console
    std::cout << "Input an integer: ";
    std::cin >> i;

    // print results
    std::cout << "Result: " << doubleNumber(i) << std::endl;

    return 0;
}
