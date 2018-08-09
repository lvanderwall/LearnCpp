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

// using arithmeticFcn = int (*)(int, int);     // C++11 type alias
typedef int (*arithmeticFcn)(int, int);

// returns a function pointer to the function specified by operator op (+ - * /)
arithmeticFcn getArithmeticFuntion(char op);

// used for associated lists (char op -> function pointer)
struct arithmeticStruct {
    char op;
    arithmeticFcn p;
};

#endif // CALCULATOR_H
