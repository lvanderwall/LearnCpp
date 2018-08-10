#define quiz2

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
#ifdef quiz2
#include <iostream>


// calculates digit sum for n in N_0 with integer division and modulus
// using "dS(n) = dS(n / 10) + (n % 10),   init. cond.: dS(n) = n for n < 10
int digitSum(int n)
{
    return (n > 10) ? digitSum(n / 10) + (n % 10) : n; // termination: 0 <= n < 10, n < 0 invalid
}


int main()
{
    std::cout << "digitSum(93427) = " << digitSum(93427) << '\n';

    return 0;
}
#endif // quiz2
