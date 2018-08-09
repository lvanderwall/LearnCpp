#include <iostream>
#include <random>       // for std::mt19937 mersenne twister
#include <ctime>        // for time()
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
        std::cout << '\n';
    }


    void swapCard(Card &c1, Card &c2)
    {
        Card temp = c1; // Card temp{c1}; won't work, no default copy ctor for structs?
        c1 = c2;
        c2 = temp;
    }


    /*
    std::random_device may always generate the same sequence (doesn't work for me)!

    "std::random_device may be implemented in terms of an implementation-defined
    pseudo-random number engine if a non-deterministic source (e.g. a hardware
    device) is not available to the implementation. In this case each
    std::random_device object may generate the same number sequence."

    https://en.cppreference.com/w/cpp/numeric/random/random_device
    */
    void shuffleDeck(deck_t &deck)
    {
        // define mt and dist as static to keep its state, use system time as seed
        static std::mt19937 mt(time(0));
        static std::uniform_int_distribution<> dist(0, deck.size() - 1);

        // swap each card with a random card
        for(auto &card: deck) swapCard(card, deck[dist(mt)]);
    }


    int getCardValue(const Card &card)
    {
        switch(card.rank) {
            case cardGame::CR_02:
            case cardGame::CR_03:
            case cardGame::CR_04:
            case cardGame::CR_05:
            case cardGame::CR_06:
            case cardGame::CR_07:
            case cardGame::CR_08:
            case cardGame::CR_09:
            case cardGame::CR_10:       return card.rank + 2;   // +2: rank offset (cardtypes.h)
            case cardGame::CR_JACK:
            case cardGame::CR_QUEEN:
            case cardGame::CR_KING:     return 10;
            case cardGame::CR_ACE:      return 11;
            default:                    return -1;              // invalid rank
        }
    }


    bool hitCard(int score)
    {
        char c{'\0'};
        while(1) {
            std::cout << "> Your hand: " << score << " pt. Hit another card (y/n)? ";
            std::cin >> c;
            if( !std::cin.fail() && ((c == 'y') || (c == 'n')) ) return (c == 'y');

            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
    }


    bool playBlackjack(const deck_t &deck)
    {
        const Card *cardPtr{ &deck[0] };                        // points to top card in deck
        int dealer{ getCardValue(*cardPtr++) };                 // #1, #7
        std::cout << "The dealer has a score of " << dealer << " pt\n\n";

        int player{ getCardValue(*cardPtr++) };                 // #2, #7
        player += getCardValue(*cardPtr++);

        while( (player < 21) && hitCard(player) )               // #3 - 4, don't hit if you reached 21
            player += getCardValue(*cardPtr++);                 // #6 - 7

        std::cout << "> Your hand: " << player << " pt\n\n";    // #5
        if(player > 21) return false;                           // #8

        while(dealer < 17) {
            dealer +=getCardValue(*cardPtr++);                  // #9 - 10
            std::cout << "The dealer got a score of " << dealer << " pt\n";
        }

        std::cout << '\n';
        return( (dealer > 21) || (player > dealer) );           // #11 - 12
    }
}
