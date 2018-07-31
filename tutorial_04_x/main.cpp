#include <iostream>
#include <string>   // for std::string


// define different monster types as an enum class
enum class MonsterType {
    DRAGON,
    GIANT_SPIDER,
    OGRE,
    ORC,
    SLIME
};


// struct contains all data of one monster
struct Monster {
    MonsterType type;
    std::string name;
    int health;
};


// returns a monster's type as a string
std::string getTypeStr(Monster monster)
{
    if     (monster.type == MonsterType::DRAGON)        return "Dragon";
    else if(monster.type == MonsterType::GIANT_SPIDER)  return "Giant Spider";
    else if(monster.type == MonsterType::OGRE)          return "Ogre";
    else if(monster.type == MonsterType::ORC)           return "Orc";
    else if(monster.type == MonsterType::SLIME)         return "Slime";
}


// prints a formatted data string for a monster
void printMonster(Monster monster)
{
    std::cout << "This " << getTypeStr(monster) << " is named " << monster.name
              << " and has " << monster.health << " health.\n";
}


int main()
{
    Monster
        ogre{  MonsterType::OGRE,  "Torg",  145},
        slime{ MonsterType::SLIME, "Blurp", 23};

    printMonster(ogre);
    printMonster(slime);

    return 0;
}
