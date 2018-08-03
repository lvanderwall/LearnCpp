#define quiz1

#ifdef quiz1
#include <iostream>


int main()
{
    // uniform initialization (no "="), no length given: determined by compiler!
    int array[] { 4, 6, 7, 3, 8, 2, 1, 9, 5 };

    // compiler calculates array length using sizeof
    const int length { sizeof(array) / sizeof(array[0]) };

    // last element: array(length - 1) => check "i < length", NOT "i <= length"
    for(int i{0}; i < length; ++i)
        std::cout << array[i] << ' ';

    return 0;
}
#endif // quiz1
