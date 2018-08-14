#include <iostream>
#include <string>
#include "monster.h"


std::string Monster::getTypeString() const
{
    switch(m_type) {
        case Monster::DRAGON:   return "dragon";
        case Monster::GOBLIN:   return "goblin";
        case Monster::OGRE:     return "ogre";
        case Monster::ORC:      return "orc";
        case Monster::SKELETON: return "skeleton";
        case Monster::TROLL:    return "troll";
        case Monster::VAMPIRE:  return "vampire";
        case Monster::ZOMBIE:   return "zombie";
        default:                return "???";       // Invalid MonsterType
    }
}


void Monster::print() const
{
    std::cout << m_name << " the " << getTypeString() <<
        " has " << m_hitPoints << " hit points and says " << m_roar << '\n';;
}
