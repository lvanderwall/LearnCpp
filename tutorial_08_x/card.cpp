#include <iostream>
#include "card.h"


void Card::printCard() const
{
    switch(m_rank) {
        case RANK_2:
        case RANK_3:
        case RANK_4:
        case RANK_5:
        case RANK_6:
        case RANK_7:
        case RANK_8:
        case RANK_9:        std::cout << m_rank + 2;    break;  // +2: rank offset (card.h)
        case RANK_10:       std::cout << 'T';           break;
        case RANK_JACK:     std::cout << 'J';           break;
        case RANK_QUEEN:    std::cout << 'Q';           break;
        case RANK_KING:     std::cout << 'K';           break;
        case RANK_ACE:      std::cout << 'A';           break;
        default:            std::cout << "Invalid card rank!"; return;
    }

    switch(m_suit) {
        case SUIT_CLUB:     std::cout << 'C'; break;
        case SUIT_DIAMOND:  std::cout << 'D'; break;
        case SUIT_HEART:    std::cout << 'H'; break;
        case SUIT_SPADE:    std::cout << 'S'; break;
        default:            std::cout << "Invalid card suit!"; return;
    }

    std::cout << ' ';
}


int Card::getCardValue() const
{
    switch(m_rank) {
        case RANK_2:
        case RANK_3:
        case RANK_4:
        case RANK_5:
        case RANK_6:
        case RANK_7:
        case RANK_8:
        case RANK_9:
        case RANK_10:   return m_rank + 2;  // +2: rank offset (card.h)
        case RANK_JACK:
        case RANK_QUEEN:
        case RANK_KING: return 10;
        case RANK_ACE:  return 11;
        default:        return -1;          // invalid rank
    }
}
