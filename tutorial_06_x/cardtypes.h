#ifndef CARDTYPES_H
#define CARDTYPES_H

#include <array>    // for std::array


namespace cardGame {
    // declare card ranks and suits for a blackjack deck
    // -> half a rommée deck without jokers
    enum CardRank {
        CR_02,      // =  0
        CR_03,      // =  1
        CR_04,      // =  2
        CR_05,      // =  3
        CR_06,      // =  4
        CR_07,      // =  5
        CR_08,      // =  6
        CR_09,      // =  7
        CR_10,      // =  8
        CR_JACK,    // =  9
        CR_QUEEN,   // = 10
        CR_KING,    // = 11
        CR_ACE,     // = 12
        CR_MAX_RANK // = 13
    };

    enum CardSuit {
        CS_CLUBS,   // =  0
        CS_DIAMONDS,// =  1
        CS_HEARTS,  // =  2
        CS_SPADES,  // =  3
        CS_MAX_SUIT // =  4
    };

    struct Card {
        CardRank rank;
        CardSuit suit;
    };

    // a black jack deck has 52 cards
    typedef std::array<Card, 52> deck_t;
}

#endif // CARDTYPES_H
