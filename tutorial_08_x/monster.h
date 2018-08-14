#ifndef MONSTER_H
#define MONSTER_H

#include <string>


class Monster
{
public:
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

    // converts MonsterType into string
    std::string getTypeString() const;

    // prints monster status to the console
    void print() const;

private:
    MonsterType m_type;
    std::string m_name;
    std::string m_roar;
    int m_hitPoints;

public:
    // user defined ctor using member initializer list
    Monster(MonsterType type, std::string name, std::string roar, int hitPoints)
        : m_type{type},
          m_name{name},
          m_roar{roar},
          m_hitPoints{hitPoints}
    {}
};

#endif // MONSTER_H
