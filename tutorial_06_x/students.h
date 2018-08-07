#ifndef STUDENTS_H
#define STUDENTS_H

#include <string>   // for std::string


struct Student {
    std::string surname;
    int grade;              // 0 <= grade <= 100
};

#endif // STUDENTS_H
