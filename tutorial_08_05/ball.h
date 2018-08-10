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
    // default constructor (ctor for short) without parameters
    // ctors have the same name as the class and no return type (not even void)
    Ball()
    {
        m_color = "black";
        m_radius = 10.0;
    }

    // three user defined ctors with different (at least one) parameters
    Ball(const std::string &color)
    {
        m_color = color;
        m_radius = 10.0;
    }

    Ball(double radius)
    {
        m_color = "black";
        m_radius = radius;
    }

    Ball(const std::string &color, double radius)
    {
        m_color = color;
        m_radius = radius;
    }
};

#endif // BALL_H
