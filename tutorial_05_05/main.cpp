#define quiz2

#ifdef quiz2
#include <iostream>


int main()
{
    char lowerChar{ 'a' };
    while(lowerChar <= 'z') {
        std::cout << lowerChar << ": " << static_cast<int>(lowerChar) << '\n';
        ++lowerChar;
    }

    return 0;
}
#endif // quiz2
