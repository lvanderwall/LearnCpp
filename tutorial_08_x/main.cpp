#define quiz4d

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
#ifdef quiz3d
#include "monster.h"


int main()
{
    Monster skele(Monster::SKELETON, "Bones", "*rattle*", 4);

    return 0;
}
#endif // quiz3d
#ifdef quiz3e
#include "monster.h"


int main()
{
    Monster skele(Monster::SKELETON, "Bones", "*rattle*", 4);
    skele.print();

    return 0;
}
#endif // quiz3e
#ifdef quiz3f
#include "monster.h"
#include "monstergenerator.h"


int main()
{
    Monster m = MonsterGenerator::generateMonster();
    m.print();

    return 0;
}
#endif // quiz3f
#ifdef quiz3h
#include "monster.h"
#include "monstergenerator.h"


int main()
{
    // no need, use mersenne twister instead (see monstergenerator.cpp)
    // srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
    // rand(); // If using Visual Studio, discard first random value

    Monster m = MonsterGenerator::generateMonster();
    m.print();

    return 0;
}
#endif // quiz3h
#ifdef quiz4a
#include <iostream>
#include "card.h"


int main()
{
    const Card cardQueenHearts(Card::RANK_QUEEN, Card::SUIT_HEART);
    cardQueenHearts.printCard();
    std::cout << " has the value " << cardQueenHearts.getCardValue() << '\n';

    return 0;
}
#endif // quiz4a
#ifdef quiz4b
#include "card.h"
#include "deck.h"


int main()
{
    // srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
    // rand(); // If using Visual Studio, discard first random value

    Deck deck;
    deck.printDeck();
    deck.shuffleDeck();
    deck.printDeck();

    return 0;
}
#endif // quiz4b
#ifdef quiz4c
#include <iostream>
#include "card.h"
#include "deck.h"


int main()
{
    // srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
    // rand(); // If using Visual Studio, discard first random value

    Deck deck;
    deck.shuffleDeck();
    deck.printDeck();
    std::cout << "The first card has value: " << deck.dealCard().getCardValue() << '\n';
    std::cout << "The second card has value: " << deck.dealCard().getCardValue() << '\n';

    return 0;
}
#endif // quiz4c
#ifdef quiz4d
#include <iostream>
#include "cardgame.h"
#include "deck.h"
#include "player.h"


int main()
{
    // initialize a black jack deck (52 cards)
    Deck deck;

    // play one round of blackjack
    char c{'\0'};
    do {
        std::cout << "\n------------- Welcome to Blackjack! -------------\n\n";
        deck.shuffleDeck();
        switch(playBlackjack(deck)) {
            case GameResult::DEALER_WINS:   std::cout << "\nYou lose -- better start counting cards!\n\n";  break;
            case GameResult::PLAYER_WINS:   std::cout << "\nYou win -- are you counting cards?\n\n";        break;
            case GameResult::TIE:           std::cout << "\nTie -- better try harder next time!\n\n";       break;
            default:                        std::cout << "\nThis cannot happen -- you cheat!\n\n";          break;
        }

        c = '\0';   // play again?
        while(1) {
            std::cout << "Continue gambling (y/n)? ";
            std::cin >> c;
            if(!std::cin.fail() && ((c == 'y') || (c == 'n'))) {
                std::cout << "\n\n";
                break;
            }

            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
    } while(c == 'y');

    return 0;
}
#endif // quiz4d
