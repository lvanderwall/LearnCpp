#ifndef BALL_H
#define BALL_H

#include <iostream>
#include <string>


class Ball
{
public:
    void print()
    {
        std::cout << "color: " << m_color << ", radius: " << m_radius << '\n';
    }

private:
    std::string m_color;            // color string
    double m_radius;                // radius in units

public:
    // default constructor (ctor for short) with only default parameters
    // ctors have the same name as the class and no return type (not even void)
    Ball(const std::string &color = "black", double radius = 10.0)
    {
        m_color = color;
        m_radius = radius;
    }

    // user defined ctors with different (at least one) parameters
    Ball(double radius)
    {
        m_color = "black";
        m_radius = radius;
    }
};

#endif // BALL_H
