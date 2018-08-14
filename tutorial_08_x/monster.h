#ifndef MONSTER_H
#define MONSTER_H

#include <string>


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


class Monster
{
private:
    MonsterType m_type;
    std::string m_name;
    std::string m_roar;
    int m_hitPoints;
};

#endif // MONSTER_H
