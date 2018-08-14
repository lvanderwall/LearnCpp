#include "monstergenerator.h"
#include "monster.h"            // for class monster


Monster MonsterGenerator::generateMonster()
{
    return Monster(Monster::SKELETON, "Bones", "*rattle*", 4);
}
