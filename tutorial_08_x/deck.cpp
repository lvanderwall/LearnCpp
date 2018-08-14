#include <iostream>
#include <random>   // for std::mt19937 and std::uniform_int_distribution
#include <ctime>    // for time()
#include "card.h"   // for Card class
#include "deck.h"


Deck::Deck()
{
    for(int suit{0}, card{0}; suit < Card::MAX_SUITS; ++suit)
        for(int rank{0}; rank < Card::MAX_RANKS; ++rank, ++card)
            m_deck[card] = Card( static_cast<Card::CardRank>(rank),
                                 static_cast<Card::CardSuit>(suit) );
}


void Deck::printDeck() const
{
    for(const auto &card: m_deck) card.printCard();
    std::cout << '\n';
}


/*
std::random_device may always generate the same sequence (doesn't work for me)!

"std::random_device may be implemented in terms of an implementation-defined
pseudo-random number engine if a non-deterministic source (e.g. a hardware
device) is not available to the implementation. In this case each
std::random_device object may generate the same number sequence."

https://en.cppreference.com/w/cpp/numeric/random/random_device
*/
int Deck::getRandomNumber(int min, int max)
{
    // define mt as static to keep its state, use system time as seed
    static std::mt19937 mt(time(0));
    std::uniform_int_distribution<> dist(min, max);

    return dist(mt);
}


void Deck::swapCard(Card &c1, Card &c2)
{
    Card temp{c1};
    c1 = c2;
    c2 = temp;
}


void Deck::shuffleDeck()
{
    // swap each card with a random card
    for(auto &card: m_deck)
        swapCard(card, m_deck[getRandomNumber(0, Card::MAX_RANKS * Card::MAX_SUITS - 1)]);
}
