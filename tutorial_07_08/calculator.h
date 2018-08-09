#ifndef CALCULATOR_H
#define CALCULATOR_H

// prompts user to enter an int
int getInt();

// prompts user to enter an operator (+ - * / %)
char getOperator();

// basic arithmetics with two integers
int add     (int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide  (int x, int y); // use integer division

#endif // CALCULATOR_H
