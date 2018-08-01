#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace myConstants
{
    constexpr double g{ 9.8 };    // in m/s^2, gravitation constant
}

enum class SimStat{
    RUNNING,
    FINISHED
};


// prompts user to input a double
double getHeight();

/*
double calculateHeight(double h0, double t)
    inputs:     h0      in m
                t       in s

    outputs:    h(t)    in m

ballHeight(..) simulates a free fall with initial height h0 and initial
velocity v0 = 0, starting at t = 0:

h(t) = h0 - 0.5 * g * t^2
*/
double calculateHeight(double h0, double t);

// prints coordinates (t, h(t)) as formatted text and returns simulation status
SimStat printHeight(double t, double h);

#endif // CONSTANTS_H
