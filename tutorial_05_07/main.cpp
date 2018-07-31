#define quiz2
#ifdef quiz1
#include <iostream>


int main()
{
    for(int i{0}; i <= 20; i += 2)
        std::cout << i << '\n';

    return 0;
}
#endif // quiz1
#ifdef quiz2
#include <iostream>


// returns sum(i = 1; i <= 5; i)
int sumTo(int maxVal)
{
    int sum{ 0 };   // use maxVal as for counter => no initialization in for loop
    for(; maxVal > 0; --maxVal)
        sum += maxVal;

    return sum;
}

int main()
{
    std::cout << sumTo(5);

    return 0;
}
#endif // quiz2
