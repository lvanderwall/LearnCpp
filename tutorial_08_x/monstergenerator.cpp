#include <random>               // for std::mt19937 mersenne twister
#include <ctime>                // for time()
#include "monstergenerator.h"
#include "monster.h"            // for class monster


Monster MonsterGenerator::generateMonster()
{
    // make s_names and s_roars static to improve performance
    static const std::string
        s_roars[] {
            "*roooaaarrr*",
            "*heeheehee*",
            "*slurp*",
            "*rattle*",
            "*chsssss*",
            "*aaarrrrggh*"
        },
        s_names[] {
            "Snap",
            "Grubby",
            "Thump",
            "Bones",
            "Vlad",
            "Gurkhal"
        };

    return Monster(
        static_cast<Monster::MonsterType>(getRandomNumber(0, Monster::MAX_MONSTER_TYPE - 1)),
        s_names[getRandomNumber(0, 5)],
        s_roars[getRandomNumber(0, 5)],
        getRandomNumber(1, 100)
    );
}


int MonsterGenerator::getRandomNumber(int min, int max)
{
    // make mt static to initialize generator only once
    static std::mt19937 mt(time(0));

    std::uniform_int_distribution<int> dist{min, max};
    return dist(mt);
}
