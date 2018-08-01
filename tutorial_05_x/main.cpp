#define quiz1

#ifdef quiz1
#include <iostream>
#include "constants.h"


int main()
{
    const double h0{ getHeight() }; // initial height in meters

    int t{ 0 };                     // simulation time in seconds
    double h{ 0 };                  // height in meters
    do{
        h = calculateHeight(h0, t);

    } while(printHeight(t++, h) == SimStat::RUNNING) ;

    return 0;
}


double calculateHeight(double h0, double t)
{
    double h = h0 - 0.5 * myConstants::g * t * t;   // free fall law

    return (h > 0) ? h : 0;                         // ball above ground?
}


SimStat printHeight(double t, double h)
{
    std::cout << "At " << t << " seconds, the ball is ";
    if(h > 0){
        std::cout << "at height: " << h << " meters\n"; // still falling
        return SimStat::RUNNING;
    }

    std::cout << "on the ground\n";                 // on the ground
    return SimStat::FINISHED;
}


double getHeight()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    double h;
    std::cin >> h;

    return h;
}
#endif // quiz1
