#include <iostream>
#include <random>       // for std::mt19937 mersenne twister
#include <ctime>        // for time()
#include "cardtypes.h"  // for cardGame::Card
#include "cardgame.h"   // for cardGame::Player, cardGame::GameResult


namespace cardGame {
    void printCard(const Card &card)
    {
        switch(card.rank) {
            case CR_02:
            case CR_03:
            case CR_04:
            case CR_05:
            case CR_06:
            case CR_07:
            case CR_08:
            case CR_09:     std::cout << card.rank + 2; break;  // +2: rank offset (cardtypes.h)
            case CR_10:     std::cout << 'T';           break;
            case CR_JACK:   std::cout << 'J';           break;
            case CR_QUEEN:  std::cout << 'Q';           break;
            case CR_KING:   std::cout << 'K';           break;
            case CR_ACE:    std::cout << 'A';           break;
            default:        std::cout << "Invalid card rank!"; return;
        }

        switch(card.suit) {
            case CS_CLUBS:      std::cout << 'C'; break;
            case CS_DIAMONDS:   std::cout << 'D'; break;
            case CS_HEARTS:     std::cout << 'H'; break;
            case CS_SPADES:     std::cout << 'S'; break;
            default:            std::cout << "Invalid card suit!"; return;
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
            case CR_02:
            case CR_03:
            case CR_04:
            case CR_05:
            case CR_06:
            case CR_07:
            case CR_08:
            case CR_09:
            case CR_10:     return card.rank + 2;   // +2: rank offset (cardtypes.h)
            case CR_JACK:
            case CR_QUEEN:
            case CR_KING:   return 10;
            case CR_ACE:    return 11;
            default:        return -1;              // invalid rank
        }
    }


    bool hitCard(const Player &player)
    {
        char c{'\0'};
        while(1) {
            std::cout << "> Your hand: " << player.score << " pt"
                      << ((player.soft) ? " (soft)" : "") << ". Hit another card (y/n)? ";
            std::cin >> c;
            if( !std::cin.fail() && ((c == 'y') || (c == 'n')) ) return (c == 'y');

            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
    }


    void drawCard(const Card *&cardPtr, Player &player)
    {
        int value{ getCardValue(*cardPtr++) };                  // draw card
        player.score += value;                                  // update score

        if(value == 11) {                                       // update soft status
            if(player.score > 21)   player.score -= 10;         // ace counts as 1 pt
            else                    player.soft = true;         // hard hand turns soft

        } else if ((player.soft) && (player.score > 21)) {      // soft hand turns hard
            player.score -= 10;
            player.soft = false;
        }
    }


    GameResult playBlackjack(const deck_t &deck)
    {
        const Card *cardPtr{ &deck[0] };                        // points to top card in deck
        Player dealer{0, false},                                // start with a hard hand at 0 pt
               player{0, false};

        drawCard(cardPtr, dealer);                              // #1
        drawCard(cardPtr, player);                              // #2
        drawCard(cardPtr, player);
        std::cout << "The dealer has a score of " << dealer.score << " pt"
                  << ((dealer.soft) ? " (soft)" : "") << "\n\n";

        while( (player.score < 21) && hitCard(player) )         // #3 - 4, don't hit if you reached 21
            drawCard(cardPtr, player);                          // #6 - 7

        std::cout << "> Your hand: " << player.score << " pt"   // #5
                  << ((dealer.soft) ? " (soft)" : "") << "\n\n";
        if(player.score > 21) return GameResult::DEALER_WINS;   // #8

        while(dealer.score < 17) {
            drawCard(cardPtr, dealer);                          // #9 - 10
            std::cout << "The dealer got a score of " << dealer.score << " pt"
                      << ((dealer.soft) ? " (soft)" : "") << '\n';
        }

        std::cout << '\n';
        if((dealer.score > 21) || (player.score > dealer.score))// #11 - 12
            return GameResult::PLAYER_WINS;

        else if( dealer.score > player.score )
            return GameResult::DEALER_WINS;

        return GameResult::TIE;                                 // tie
    }
}
