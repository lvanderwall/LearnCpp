#ifndef PLAYER_H
#define PLAYER_H

#include "deck.h"


class Player
{
public:
    // shows current score and prompts player to hit a card
    bool hitCard() const;

    // draw a card, update score and soft status of player
    void drawCard(Deck &deck);

    // player hand is busted, i.e. has more than 21 pt.
    bool isBusted() const {return (m_score > 21);}

    // standard getters
    int getScore() const {return m_score;}
    bool getSoft() const {return m_soft;}

private:
    int m_score{0};             // score of players current hand
    bool m_soft{false};         // true, if player hand is soft (has one ace worth 11pt)

public:
    // default ctor
    Player() {};
};

#endif // PLAYER_H
