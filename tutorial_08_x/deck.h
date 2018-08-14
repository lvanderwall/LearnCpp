#ifndef DECK_H_INCLUDED
#define DECK_H_INCLUDED

#include <array>
#include "card.h"


class Deck
{
public:
    // prints a black jack deck as 2-letter code
    void printDeck() const;

    // shuffles all cards in a black jack deck
    void shuffleDeck();

private:
    // a black jack deck has 52 cards
    std::array<Card, Card::MAX_RANKS * Card::MAX_SUITS> m_deck;

    // returns a uniformly distributed random number min <= n <= max
    static int getRandomNumber(int min, int max);

    // swaps two cards of a black jack deck
    static void swapCard(Card &c1, Card &c2);

public:
    // default ctor
    Deck();
};

#endif // DECK_H_INCLUDED
