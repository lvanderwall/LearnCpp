// #include <iostream> not necessary: It's not used in this file!


// forward declarations for functions in io.cpp
int readNumber();           // read one integer from console
void writeAnswer(int x);    // print output line


int main()
{
    int x = readNumber();
    int y = readNumber();

    writeAnswer(x + y);

    return 0;
}
