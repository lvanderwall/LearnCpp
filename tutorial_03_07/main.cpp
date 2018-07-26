#include <iostream>


// prompts user to input an integer
int getInt()
{
    std::cout << "Enter an integer 0 <= i < 256:\t";
    int x;
    std::cin >> x;

    return x;
}


/*
int printAndDecrement(int x, int pow)
    inputs:     pow = 2^n,  n in {0; ...; 7}
                x in N_0,   2^n <= x < 2^(n+1)

    outputs:    y in N_0

printAndDecrement() prints highest bit of x and returns x without its highest bit
*/
int printAndDecrement(int x, int pow)
{
    // if highest bit is set,
    if(x >= pow) {
        std::cout << '1';
        return x - pow;

    } else {
        std::cout << '0';
        return x ;
    }
}


// prints binary if 0 <= < < 256
void printBinary(int x)
{
    std::cout << "x = 0b ";
    x = printAndDecrement(x, 128);
    x = printAndDecrement(x,  64);
    x = printAndDecrement(x,  32);
    x = printAndDecrement(x,  16);

    std::cout << ' ';
    x = printAndDecrement(x,   8);
    x = printAndDecrement(x,   4);
    x = printAndDecrement(x,   2);
    x = printAndDecrement(x,   1);
}


int main()
{
    int x{ getInt() };
    printBinary(x);

    return 0;
}
