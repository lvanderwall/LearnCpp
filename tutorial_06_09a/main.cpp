#include <iostream>
#include <string>       // for std::string
#include <utility>      // for std::swap, use <algorithm> before C++11


// selection sort (ascending order, optimized)
void selectionSort(std::string *array, const int length)
{
    for(int i{0}; i < length - 1; ++i) {        // sort n-1 elements => last one is sorted automatically
        int minIndex{i};
        for(int j{i + 1}; j < length; ++j)      // iterate through remaining unsorted elements
            if(array[j] < array[minIndex]) minIndex = j;

        std::swap(array[i], array[minIndex]);   // sort i'th element
    }
}


int main()
{
    std::cout << "How many names would you like to enter? ";
    int maxNames;
    std::cin >> maxNames;
    std::cin.ignore(32767, '\n');   // otherwise "" will be read as first name

    // allocate memory, use new[] because we allocate memory for an array
    std::string *names{ new std::string[maxNames] };

    // enter every name, use std::getline() to accept blanks
    for(int i{0}; i < maxNames; ++i) {
        std::cout << "Enter name #" << (i + 1) << ": ";
        std::getline(std::cin, names[i]);
    }

    selectionSort(names, maxNames);

    // print sorted names
    std::cout << '\n';
    for(int i{0}; i < maxNames; ++i)
        std::cout << "Name #" << (i + 1) << ": " << names[i] << '\n';

    // free memory, use delete[] because we free memory of an array
    delete[] names;

    // no need to set "pNames = nullptr", as it goes out of scope now
    return 0;
}
