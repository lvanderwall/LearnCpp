#ifndef CARDGAME_H
#define CARDGAME_H

#include "cardtypes.h"  // for cardGame::Card


namespace cardGame {
    // combine player score and soft status
    struct Player {
        int score;      // current player score
        bool soft;      // true, if player hand is soft (has one ace worth 11pt)
    };

    // outcomes of a black jack game
    enum class GameResult {
        PLAYER_WINS,
        DEALER_WINS,
        TIE
    };

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

    // shows current score and prompts player to hit a card
    bool hitCard(const Player &player);

    // draw a card, update score and soft status of player
    void drawCard(const Card *&cardPtr, Player &player);

    /*
    GameResult playBlackjack(const deck_t &deck);
        inputs:
            deck:       reference to a shuffled deck

        outputs:
            gameResult: GameResult

    playBlackjack() implements one round of simplified blackjack according to
    the 12 rules of quiz7 and also implements soft / hard aces. Returns one of
    three game results.
    */
    GameResult playBlackjack(const deck_t &deck);
}

#endif // CARDGAME_H
