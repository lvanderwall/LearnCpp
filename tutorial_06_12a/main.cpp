#include <iostream>
#include <string>       // for std::string

int main()
{
    // no length given => let C++ determine the length of the fixed length array
    const std::string names[] {
        "Alex",
        "Betty",
        "Caroline",
        "Dave",
        "Emily",
        "Fred",
        "Greg",
        "Holly"
    };

    // user inputs a name
    std::cout << "Enter a name: ";
    std::string name;
    std::getline(std::cin, name);

    bool found{false};
    for(const auto &s: names)               // use auto to let C++ determine the element type of elements in array
                                            // use reference to avoid copies of elements
        if( (found = (s == name)) ) break;  // no need to search rest of array after hit

    if(found)   std::cout << name << " was found.\n";
    else        std::cout << name << " was not found.\n";

    return 0;
}
