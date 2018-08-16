#ifndef GRADEMAP_H
#define GRADEMAP_H

#include <string>   // for std::string
#include <vector>   // for std::vector


struct StudentGrade {
    std::string name;
    char grade;
};


class GradeMap
{
public:
    // use student names as index to access grade
    char& operator[](const std::string &name);

private:
    std::vector<StudentGrade> m_map;

public:
    // default ctor
    GradeMap() {};
};

#endif // GRADEMAP_H
