#include <iostream>
#include "deck.h"
#include "player.h"


bool Player::hitCard() const
{
    char c{'\0'};
    while(1) {
        std::cout << "> Your hand: " << m_score << " pt"
                  << ((m_soft) ? " (soft)" : "") << ". Hit another card (y/n)? ";
        std::cin >> c;
        if( !std::cin.fail() && ((c == 'y') || (c == 'n')) ) return (c == 'y');

        std::cin.clear();
        std::cin.ignore(32767, '\n');
    }
}


void Player::drawCard(Deck& deck)
{
    int value{ deck.dealCard().getCardValue() };// draw card and save its value
    m_score += value;                           // update score

    if(value == 11) {                           // update soft status
        if(m_score > 21) m_score -= 10;         // ace counts as 1 pt
        else             m_soft = true;         // hard hand turns soft

    } else if (m_soft && (m_score > 21)) {      // soft hand turns hard
        m_score -= 10;
        m_soft = false;
    }
}
