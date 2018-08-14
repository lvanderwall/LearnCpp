#include <random>               // for std::mt19937 mersenne twister
#include <ctime>                // for time()
#include "monstergenerator.h"
#include "monster.h"            // for class monster


Monster MonsterGenerator::generateMonster()
{
    return Monster(Monster::SKELETON, "Bones", "*rattle*", 4);
}


int MonsterGenerator::getRandomNumber(int min, int max)
{
    // make mt static to initialize generator only once
    static std::mt19937 mt(time(0));

    std::uniform_int_distribution<int> dist{min, max};
    return dist(mt);
}
