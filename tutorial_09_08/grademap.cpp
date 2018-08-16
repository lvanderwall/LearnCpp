#include <string>       // for std::string
#include "grademap.h"


char& GradeMap::operator[](const std::string &name)
{
    for(auto &student: m_map)
        if(student.name == name) return student.grade;  // student already exist

    m_map.push_back(StudentGrade{name, '\0'});          // add a new student
    return m_map.back().grade;
}
