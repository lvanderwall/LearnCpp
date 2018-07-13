#define quiz4

#ifdef quiz3
#include <iostream>


// prompts user to input a double
double getDouble()
{
    std::cout << "Enter a double:\t\t\t";
    double x;
    std::cin >> x;

    return x;
}


// prompts user to input a char
char getOperator()
{
    std::cout << "Enter an operator (+, -, *, /):\t";
    char op;
    std::cin >> op;

    return op;
}


// formatted output
void printResult(double x, double y, char op)
{
    if     (op == '+') std::cout << x << " + " << y << " = " << x + y << '\n';
    else if(op == '-') std::cout << x << " - " << y << " = " << x - y << '\n';
    else if(op == '*') std::cout << x << " * " << y << " = " << x * y << '\n';
    else if(op == '/') std::cout << x << " / " << y << " = " << x / y << '\n';
}


int main()
{
    double x{ getDouble() },
           y{ getDouble() };

    char   op{ getOperator() };

    printResult(x, y, op);

    return 0;
}
#endif // quiz3
#ifdef quiz4
#include <iostream>
#include "constants.h"


/*
double calculateHeight(double h0, double t)
    inputs:     h0      in m
                t       in s

    outputs:    h(t)    in m

ballHeight(..) simulates a free fall with initial height h0 and initial
velocity v0 = 0, starting at t = 0:

h(t) = h0 - 0.5 * g * t^2
*/
double calculateHeight(double h0, double t)
{
    double h = h0 - 0.5 * myConstants::g * t * t;   // free fall law

    if(h > 0) return h;                             // ball is still falling
    else      return 0;                             // ball on the ground
}


// prints coordinates (t, h(t)) as formatted text
void printHeight(double t, double h)
{
    std::cout << "At " << t << " seconds, the ball is ";
    if(h > 0) std::cout << "at height: " << h << " meters\n";   // still falling
    else      std::cout << "on the ground\n";                   // on the ground
}


/*
void calculateAndPrintHeight(double h0, double t)
    inputs:     h0 in m,    initial height
                t  in s,    time
*/
void calculateAndPrintHeight(double h0, double t)
{
    printHeight(t, calculateHeight(h0, t));
}


// prompts user to input a double
double getHeight()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    double h;
    std::cin >> h;

    return h;
}


int main()
{
    const double h0{ getHeight() }; // initial height in meters

    calculateAndPrintHeight(h0, 0);
    calculateAndPrintHeight(h0, 1);
    calculateAndPrintHeight(h0, 2);
    calculateAndPrintHeight(h0, 3);
    calculateAndPrintHeight(h0, 4);
    calculateAndPrintHeight(h0, 5);

    return 0;
}
#endif // quiz4
