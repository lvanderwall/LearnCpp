#include <iostream>


namespace Animals
{
    enum Animals {
        CHICKEN,    // = 0
        DOG,        // = 1
        CAT,        // = 2
        ELEPHANT,   // = 3
        DUCK,       // = 4
        SNAKE,      // = 5
        MAX_ANIMAL  // = 6
    };
};


int main()
{
    int legs[Animals::MAX_ANIMAL] { // use uniform initialization (without "=")
        2,  // CHICKEN,
        4,  // DOG
        4,  // CAT
        4,  // ELEPHANT
        2,  // DUCK
        0   // SNAKE
    };

    std::cout << "An elephant has " << legs[Animals::ELEPHANT] << " legs.\n";

    return 0;
}
