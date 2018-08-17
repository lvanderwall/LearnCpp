#ifndef AVERAGE_H
#define AVERAGE_H

#include <cstdint>      // for std::int8_t, std::int32_t
#include <iostream>


class Average
{
public:
    // adds a number to average
    Average& operator+=(int x);

    // print average to console
    friend std::ostream& operator<<(std::ostream &out, const Average &avg);

private:
    std::int32_t m_total = 0;// sum of all numbers added since creation
    std::int8_t m_N = 0;     // # of numbers added since creation

    // use default ctor, copy ctor and assignment op: Shallow copying is enough!
};

#endif // AVERAGE_H
