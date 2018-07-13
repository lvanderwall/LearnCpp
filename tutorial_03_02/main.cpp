#include <iostream>


// returns true if x is even
bool isEven(int x)
{
    return !(x % 2);    // 0 -> false,  Z\{0} -> true
}


// prompts user to input an integer
int getInt()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;

    return x;
}


int main()
{
    int x{ getInt() };

    if(isEven(x)) std::cout << x << " is even";
    else          std::cout << x << " is odd";
}
