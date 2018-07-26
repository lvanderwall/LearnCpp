#include <iostream>


int main()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;                  // x has block scope and automatic duration

    std::cout << "Enter a larger integer: ";
    int y;                          // y has block scope and automatic duration
    std::cin >> y;

    if(x >= y) {                    // swap x and y if necessary
        std::cout << "Swapping the values\n";
        int tmp{ x };               // tmp has block scope and automatic duration
        x = y;
        y = tmp;
    }                               // tmp dies

    std::cout << "The smaller value is " << x << '\n';
    std::cout << "The larger value is " << y;

    return 0;
}                                   // x, y die
