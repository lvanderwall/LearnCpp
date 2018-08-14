#ifndef CARD_H
#define CARD_H

class Card
{
public:
    // declare card ranks and suits for a blackjack deck
    // -> half a rommée deck without jokers
    enum CardRank {
        RANK_2,         // = 0
        RANK_3,         // = 1
        RANK_4,         // = 2
        RANK_5,         // = 3
        RANK_6,         // = 4
        RANK_7,         // = 5
        RANK_8,         // = 6
        RANK_9,         // = 7
        RANK_10,        // = 8
        RANK_JACK,      // = 9
        RANK_QUEEN,     // = 10
        RANK_KING,      // = 11
        RANK_ACE,       // = 12
        MAX_RANKS       // = 13
    };

    enum CardSuit {
        SUIT_CLUB,      // = 0
        SUIT_DIAMOND,   // = 1
        SUIT_HEART,     // = 2
        SUIT_SPADE,     // = 3
        MAX_SUITS       // = 4
    };

    // prints a card as a 2-letter code
    void printCard() const;

    // returns the black jack card value (ace == 11pt)
    int getCardValue() const;

private:
    CardRank m_rank {RANK_ACE};
    CardSuit m_suit {SUIT_CLUB};

public:
    // default ctor needed for std::array
    Card() {}

    // user defined ctor
    Card(CardRank rank, CardSuit suit)
        : m_rank{rank},
          m_suit{suit}
    {}
};

#endif // CARD_H
