#define quiz4

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
#ifdef quiz3
#include <iostream>

// Loop between 1 and 5
int main()
{
    int outer = 5;
    while (outer >= 1)
    {
        // loop between 1 and outer
        int inner = outer;
        while (inner >= 1)
            std::cout << inner-- << " ";

        // print a newline at the end of each row
        std::cout << "\n";
        --outer;
    }

    return 0;
}
#endif // quiz3
#ifdef quiz4
#include <iostream>

// Loop between 1 and 5
int main()
{
    int outer = 1;
    while (outer <= 5)
    {
        // loop between 1 and outer
        int inner = 5;
        while (inner >= 1) {
            if(inner > outer) std::cout << "  ";
            else              std::cout << inner << ' ';

            --inner;
        }

        // print a newline at the end of each row
        std::cout << "\n";
        ++outer;
    }

    return 0;
}
#endif // quiz4
