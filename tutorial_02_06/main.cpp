#include <iostream>     // for std::cin, std::cout and std::endl


// checks if single digit x is prime
bool isPrime(int x)
{
    if(x == 2) return true;
    if(x == 3) return true;
    if(x == 5) return true;
    if(x == 7) return true;

    return false;
}


// takes a single digit integer from the user
int getInt()
{
    std::cout << "Enter a single digit integer: ";
    int x;
    std::cin >> x;

    return x;
}


int main()
{
    int x = getInt();
    if(isPrime(x)) std::cout << "The digit is prime"     << std::endl;
    else           std::cout << "The digit is not prime" << std::endl;

    return 0;
}
