#include <iostream>
#include "cardtypes.h"  // for cardGame::Card


namespace cardGame {
    void printCard(const Card &card)
    {
        switch(card.rank) {
            case cardGame::CR_02:
            case cardGame::CR_03:
            case cardGame::CR_04:
            case cardGame::CR_05:
            case cardGame::CR_06:
            case cardGame::CR_07:
            case cardGame::CR_08:
            case cardGame::CR_09:       std::cout << card.rank + 2; break;  // +2: rank offset (cardtypes.h)
            case cardGame::CR_10:       std::cout << 'T';           break;
            case cardGame::CR_JACK:     std::cout << 'J';           break;
            case cardGame::CR_QUEEN:    std::cout << 'Q';           break;
            case cardGame::CR_KING:     std::cout << 'K';           break;
            case cardGame::CR_ACE:      std::cout << 'A';           break;
            default:                    std::cout << "Invalid card rank!"; return;
        }

        switch(card.suit) {
            case cardGame::CS_CLUBS:    std::cout << 'C'; break;
            case cardGame::CS_DIAMONDS: std::cout << 'D'; break;
            case cardGame::CS_HEARTS:   std::cout << 'H'; break;
            case cardGame::CS_SPADES:   std::cout << 'S'; break;
            default:                    std::cout << "Invalid card suit!"; return;
        }

        std::cout << ' ';
    }


    void printDeck(const deck_t &deck)
    {
        for(auto card: deck) printCard(card);
    }


    void swapCard(Card &c1, Card &c2)
    {
        Card temp = c1; // Card temp{c1}; won't work, no default copy ctor for structs?
        c1 = c2;
        c2 = temp;
    }
}
