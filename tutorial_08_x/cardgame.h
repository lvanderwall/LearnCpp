#ifndef CARDGAME_H
#define CARDGAME_H

#include "deck.h"


// outcomes of a black jack game
enum class GameResult {
    PLAYER_WINS,
    DEALER_WINS,
    TIE
};

/*
GameResult playBlackjack(const Deck &deck);
    inputs:
        deck:       reference to a shuffled deck

    outputs:
        gameResult: GameResult

playBlackjack() implements one round of simplified blackjack according to
the 12 rules of Tutorial 06.x quiz7 and also implements soft / hard aces. Returns
one of three game results.
*/
GameResult playBlackjack(Deck &deck);

#endif // CARDGAME_H
