// #include <iostream> not necessary: It's not used in this file!
#include "io.h"


int main()
{
    int x = readNumber();
    int y = readNumber();

    writeAnswer(x + y);

    return 0;
}
