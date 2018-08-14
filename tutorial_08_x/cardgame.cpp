#include <iostream>
#include "cardgame.h"   // for GameResult
#include "deck.h"
#include "player.h"     // for class Player


GameResult playBlackjack(Deck &deck)
{
    Player dealer,                                                      // start with a hard hand at 0 pt
           player;

    dealer.drawCard(deck);                                              // #1
    player.drawCard(deck);                                              // #2
    player.drawCard(deck);
    std::cout << "The dealer has a score of " << dealer.getScore() << " pt"
              << ((dealer.getSoft()) ? " (soft)" : "") << "\n\n";

    while( (player.getScore() < 21) && player.hitCard() )               // #3 - 4, don't hit if you reached 21
        player.drawCard(deck);                                          // #6 - 7

    std::cout << "> Your hand: " << player.getScore() << " pt"          // #5
              << ((dealer.getSoft()) ? " (soft)" : "") << "\n\n";
    if(player.isBusted()) return GameResult::DEALER_WINS;               // #8

    while(dealer.getScore() < 17) {
        dealer.drawCard(deck);                                          // #9 - 10
        std::cout << "The dealer got a score of " << dealer.getScore() << " pt"
                  << ((dealer.getSoft()) ? " (soft)" : "") << '\n';
    }

    std::cout << '\n';
    if( dealer.isBusted() || (player.getScore() > dealer.getScore()) )  // #11 - 12
        return GameResult::PLAYER_WINS;

    else if( dealer.getScore() > player.getScore() )
        return GameResult::DEALER_WINS;

    return GameResult::TIE;                                             // tie
}
