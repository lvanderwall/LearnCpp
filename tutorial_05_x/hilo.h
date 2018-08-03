#ifndef HILO_H
#define HILO_H

// returns a random number with uniform integer distribution between min, max
int getRandomNumber(int min, int max);

// play a single game of HiLo
void hiLo();

// prompts user to play agains
bool playAgain();

// prompts user to guess the number
int guessInt(int guessCount);

#endif // HILO_H
