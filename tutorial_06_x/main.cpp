#define quiz4

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
#ifdef quiz2
#include <iostream>
#include <utility>
#include "students.h"


// selection sort (optimized, descending order by grades)
void selectionSort(Student *const students, const int length)
{
    for(int i{0}; i < length - 1; ++i) {            // sort n-1 elements => last one is sorted automatically
        int maxIndex{i};
        for(int j{i + 1}; j < length; ++j)          // iterate through remaining unsorted elements
            if(students[j].grade > students[maxIndex].grade) maxIndex = j;

        std::swap(students[i], students[maxIndex]); // sort i'th element
    }
}


// prompts user to enter an integer
int getInt()
{
    int x;
    std::cin >> x;
    std::cin.ignore(32767, '\n');                   // ignore trailing '\n'

    return x;
}


int main()
{
    std::cout << "How many students do you want to enter: ";
    const int maxStudents{ getInt() };

    // allocate memory for students, use new[] to allocate an array
    Student *students{ new Student[maxStudents] };

    // enter all students
    for(int i{0}; i < maxStudents; ++i) {
        std::cout << "First name:\t\t";
        std::getline(std::cin, students[i].surname);

        std::cout << "Grade (0 <= n <= 100):\t";
        students[i].grade = getInt();
    }
    std::cout << '\n';

    // sort students by grade
    selectionSort(students, maxStudents);

    // output all students
    for(int i{0}; i < maxStudents; ++i)
        std::cout << students[i].surname << " got a grade of " << students[i].grade << '\n';

    // free memory, use delete[] to free memory of an array
    delete[] students;          // goes out of scope now, no need to set it to "nullptr"

    return 0;
}
#endif // quiz2
#ifdef quiz3
#include <iostream>


void swap(int &x, int &y)
{
    int temp{x};    // save x so it doesn't get lost in the next line...
    x = y;          // ... when we overwrite x with y
    y = temp;
}


int main()
{
    int x = 1,
        y = 2;
    swap(x, y);

    if( (x == 2) && (y == 1) ) std::cout << "swap() works\n";   // test it
    else                       std::cout << "swap() is broken\n";

    return 0;
}
#endif // quiz3
#ifdef quiz4
#include <iostream>


// prints a C-style string character by character
// use const char *s, so we can't change s by accident
void printStr(const char *s)
{
    while(*s)                       // while(*s != '\0'), we haven't reached a terminator
        std::cout << *s++ << ' ';   // print *s and THEN increase it (postfix!)
}


int main()
{
    const char* s{"Hello, world!"};
    printStr(s);

    return 0;
}
#endif // quiz4