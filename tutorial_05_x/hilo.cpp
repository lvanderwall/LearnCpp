#include <iostream>
#include <random>   // for std::mt19937 (and std::random_device, if it was working)
#include <ctime>    // for time() as random_device is not working
#include "hilo.h"


void hiLo()
{
    const int maxGuesses{7};
    std::cout << "Let's play a game. I'm thinking of a number 0 <= n <= 100."
              << " You have " << maxGuesses << " tries to guess what it is!\n";

    int code{getRandomNumber(0, 100)},
        guessCount{1};

    do {
        int guess{ guessInt(guessCount)};// prompt user to guess

        if      (guess < code) std::cout << "Your guess is too low.\n";
        else if (guess > code) std::cout << "Your guess is too high.\n";
        else break;                     // correct guess
    } while(guessCount++ < maxGuesses);

    if(guessCount <= maxGuesses)        // game over
        std::cout << "Correct! You win!\n";

    else
        std::cout << "Sorry, you lose. The correct number was " << code << ".\n";
}


/*
std::random_device may always generate the same sequence!

"std::random_device may be implemented in terms of an implementation-defined
pseudo-random number engine if a non-deterministic source (e.g. a hardware
device) is not available to the implementation. In this case each
std::random_device object may generate the same number sequence."

https://en.cppreference.com/w/cpp/numeric/random/random_device
*/
int getRandomNumber(int min, int max)
{
    // define rd and mt static to keep their states
    // static std::random_device rd;    // use hardware device as seed, if available
    // static std::mt19937 mt(rd());

    // define mt static to keep its state, use system time as seed
    static std::mt19937 mt(time(0));    // execute this line only once

    std::uniform_int_distribution<> uniform_dist(min, max);
    return uniform_dist(mt);            // use mt to generate a random number
}


int guessInt(int guessCount)
{
    int guess{0};
    while(1) {                              // loop until valid input
        std::cout << "Guess #" << guessCount << ": ";
        std::cin >> guess;

        if(std::cin.fail()) {               // extraction error
            std::cin.clear();
            std::cin.ignore(32767, '\n');   // clear input buffer
        }

        else {
            std::cin.ignore(32767, '\n');   // clear input buffer
            return guess;
        }
    }
}


bool playAgain()
{
    char c{'\0'};
    do {
        std::cout << "Would you like to play again (y/n)? ";
        std::cin >> c;
        if(std::cin.fail()) std::cin.clear();   // extraction error

        std::cin.ignore(32767, '\n');           // clear input buffer
    } while( (c != 'y') && (c != 'n') );        // accept only y / n

    if(c == 'n') std::cout << "Thank you for playing!\n";

    return(c == 'y');
}
