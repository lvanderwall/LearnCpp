#define quiz3b

#ifdef quiz1a
#include "point2d.h"


int main()
{
    Point2d first;
    Point2d second(3.0, 4.0);
    first.print();
    second.print();

    return 0;
}
#endif // quiz1a
#ifdef quiz1b
#include <iostream>
#include "point2d.h"


int main()
{
    Point2d first;
    Point2d second(3.0, 4.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';

    return 0;
}
#endif // quiz1b
#ifdef quiz1c
#include <iostream>
#include "point2d.h"


int main()
{
    Point2d first;
    Point2d second(3.0, 4.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';

    return 0;
}
#endif // quiz1c
#ifdef quiz2
#include <iostream>


class HelloWorld
{
private:
    char *m_data;

public:
    HelloWorld()
    {
        m_data = new char[14];
        const char *init = "Hello, World!";
        for (int i = 0; i < 14; ++i)
            m_data[i] = init[i];
    }

    ~HelloWorld()
    {
        // use array version to free memory of array member m_data
        delete[] m_data;
    }

    void print() const
    {
        std::cout << m_data;
    }

};

int main()
{
    HelloWorld hello;
    hello.print();

    return 0;
}
#endif // quiz2
#ifdef quiz3a

enum MonsterType {
    DRAGON,             // = 0
    GOBLIN,             // = 1
    OGRE,               // = 2
    ORC,                // = 3
    SKELETON,           // = 4
    TROLL,              // = 5
    VAMPIRE,            // = 6
    ZOMBIE,             // = 7
    MAX_MONSTER_TYPE    // = 8
};


int main()
{
    return 0;
}
#endif // quiz3a
#ifdef quiz3b
#include "monster.h"


int main()
{
    return 0;
}
#endif // quiz3b
