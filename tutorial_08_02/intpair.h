#ifndef INTPAIR_H
#define INTPAIR_H

#include <iostream>


class IntPair               // class name should start with a capital letter
{
public:                     // keyword, not introduced yet
    int m_x;                // member variables should have prefix "m_"
    int m_y;

    void set(int x, int y)  // member function, sets member variables
    {
        m_x = x;
        m_y = y;
    }

    void print()
    {
        std::cout << "Pair(" << m_x << ", " << m_y << ")\n";
    }
};

#endif // INTPAIR_H
