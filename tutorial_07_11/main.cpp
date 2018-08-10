#define quiz1

#ifdef quiz1
#include <iostream>


// calculates n! for n in N_0 using "n! = n * (n-1)!,   init. cond.: 0! = 1"
int factorial(int n)
{
    return (n > 0) ? n * factorial(n - 1) : 1;   // termination: n == 0, n < 0 invalid
}


int main()
{
    for(int i{0}; i < 7; ++i)
        std::cout << i << "! = " << factorial(i) << '\n';

    return 0;
}
#endif // quiz1
