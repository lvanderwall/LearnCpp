#define quiz1b

#ifdef quiz1a
#include <string>


struct StudentGrade {
    std::string name;
    char grade;
};


int main()
{
    return 0;
}
#endif // quiz1a
#ifdef quiz1b
#include <iostream>
#include "grademap.h"


int main()
{
    GradeMap grades;
    grades["Joe"] = 'A';
    grades["Frank"] = 'B';
    std::cout << "Joe has a grade of " << grades["Joe"] << '\n';
    std::cout << "Frank has a grade of " << grades["Frank"] << '\n';

    return 0;
}
#endif // quiz1b
