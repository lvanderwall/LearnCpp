#ifndef CARDGAME_H
#define CARDGAME_H

#include "cardtypes.h"  // for cardGame::Card


namespace cardGame {
    // prints a card as a 2-letter code
    void printCard(const Card &card);

    // prints a black jack deck as 2-letter code
    void printDeck(const deck_t &deck);

    // swaps two cards of a black jack deck
    void swapCard(Card &c1, Card &c2);

    // shuffles all cards in a black jack deck
    void shuffleDeck(deck_t &deck);

    // returns the black jack card value (ace == 11pt)
    int getCardValue(const Card &card);
}

#endif // CARDGAME_H
