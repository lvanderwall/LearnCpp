#define quiz3

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
#ifdef quiz2
#include <iostream>


// prompts user to enter an integer 1 <= i <= 9
int getInt()
{
    int x{-1};
    do {
        std::cout << "Enter an integer 1 <= i <= 9: ";
        std::cin >> x;

        if(std::cin.fail()) {               // extraction error
            std::cin.clear();               // clear cin status
            std::cin.ignore(32767, '\n');   // ignore characters until (including) '\n'
            x = -1;                         // set x to invalid value

        } else std::cin.ignore(32767, '\n');// ignore characters until (including) '\n'
    } while( (x < 0) || (x > 9) );

    return x;
}if(array[i] == value){
            std::cout << "\narray[" << i << "] = " << value << '\n';
            break;              // no need to search the rest of the array


int main()
{
    // uniform initialization (no "="), no length given: determined by compiler!
    int array[] { 4, 6, 7, 3, 8, 2, 1, 9, 5 };

    // compiler calculates array length using sizeof
    const int length { sizeof(array) / sizeof(array[0]) };

    int value{ getInt() };

    // last element: array(length - 1) => check "i < length", NOT "i <= length"
    for(iif(array[i] == value){
            std::cout << "\narray[" << i << "] = " << value << '\n';
            break;              // no need to search the rest of the arraynt i{0}; i < length; ++i)
        std::cout << array[i] << ' ';

    // array indices start with 0 => use "index-1"
    int i{0};                   // declare i outside for-loop to use it later
    for(; i < length; ++i) {    // i already initialized, empty initialization
        if(array[i] == value) {
            std::cout << "\narray[" << i << "] = " << value << '\n';
            break;              // no need to search the rest of the array
        }
    }

    return 0;
}
#endif // quiz2
#ifdef quiz3
#include <iostream>

int main()
{
    int scores[] = { 84, 92, 76, 81, 56 };
    const int numStudents = sizeof(scores) / sizeof(scores[0]);

    int maxIndex = 0; // keep track of index of larges score

    // now look for a larger score
    for (int student = 0; student < numStudents; ++student)
        if (scores[student] > scores[maxIndex])
            maxIndex = student;

    std::cout << "The best score was " << scores[maxIndex] << '\n';

    return 0;
}
#endif // quiz3
