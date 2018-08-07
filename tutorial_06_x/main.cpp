#define quiz1

#ifdef quiz1
#include <iostream>
#include "items.h"


int countTotalItems(const int *items)
{
    int itemTotal{0};
    for(int i{0}; i < RpgConstants::MAX_TYPES; ++i)
        itemTotal += items[i];

    return itemTotal;
}


int main()
{
    int items[RpgConstants::MAX_TYPES] {
        2,  // POTION
        5,  // TORCH
        10  // ARROW
    };

    std::cout << "You have " << countTotalItems(items) << " items total!\n";

    return 0;
}

#endif // quiz1
