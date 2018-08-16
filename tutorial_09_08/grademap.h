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
private:
    std::vector<StudentGrade> m_map;

public:
    // default ctor
    GradeMap() {};
};

#endif // GRADEMAP_H
