#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <cassert>                  // for assert()


class Stack                         // class name in capital letters
{
public:
    // resets stack
    void reset()                    // public member function
    {
        m_next = 0;
        for(auto &x: m_stack) x = 0;// for each loop works with fixed arrays
    }

    // pushes an int on the stack, if there is still space left
    bool push(int x)
    {
        if(m_next >= m_maxLength) return false;

        m_stack[m_next++] = x;      // m_next points to the first free element, we have to increase it afterwards
        return true;
    }

    // pops a value of the stack, if there is one left
    int pop()
    {
        assert(m_next > 0 && "pop(): Stack is empty!");
        return m_stack[--m_next];   // m_next points to the first free element, we have to decrease it first
    }

    // prints the entire stack
    void print()
    {
        std::cout << "( ";
        for(int i{0}; i < m_next; ++i)
            std::cout << m_stack[i] << ' ';

        std::cout << ")\n";
    }

private:
    // index of the next free stack element
    int m_next;

    static const int m_maxLength{10};// why static? we haven't introduced it yet

    // fixed maximum stack depth of 10
    int m_stack[m_maxLength];
};

#endif // STACK_H
