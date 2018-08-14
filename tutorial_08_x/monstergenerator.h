#ifndef MONSTERGENERATOR_H
#define MONSTERGENERATOR_H

#include "monster.h"    // for class Monster


class MonsterGenerator
{
public:
    // generates a random monster
    static Monster generateMonster();

    // returns random numbers between min and max included (uniform distribution)
    static int getRandomNumber(int min, int max);
};

#endif // MONSTERGENERATOR_H
