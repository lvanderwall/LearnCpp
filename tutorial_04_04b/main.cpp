#include <iostream>
#include <string>       // for std::string


int main()
{
    std::cout << "Enter your full name: ";
    std::string name;
    std::getline(std::cin, name);   // read one line (until \n), discard \n

    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;                // read from console until next whitespace
    std::cin.ignore(32767, '\n');   // ignore up to 32767 chars in cin until next \n (not useful in this case: no further input)

    // use static_cast<>() on one operand to prevent integer division
    std::cout << "You've lived " << age / static_cast<double>(name.length())
              << " years for each letter in your name";

    return 0;
}
