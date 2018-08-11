#include <string>
#include <iostream>


class Ball
{
private:
    std::string m_color{"black"};   // use non-static member initialization (C++11)
    double m_radius{10.0};

public:
    // Default constructor with no parameters
    Ball() {}                       // use default values of non-static member initialization

    // Constructor with only color parameter (radius will use default value)
    Ball(const std::string &color)  // member initialization list for color takes
        : m_color{color}            // precedence over non-static member initialization
    {}                              // use non-static member initialization for m_radius

    // Constructor with only radius parameter (color will use default value)
    Ball(double radius)
        : m_radius{radius}
    {}

    // Constructor with both color and radius parameters
    Ball(const std::string &color, double radius)
        : m_color{color},
          m_radius{radius}
    {}

    void print()
    {
        std::cout << "color: " << m_color << ", radius: " << m_radius << '\n';
    }
};

int main()
{
    Ball def;
    def.print();

    Ball blue("blue");
    blue.print();

    Ball twenty(20.0);
    twenty.print();

    Ball blueTwenty("blue", 20.0);
    blueTwenty.print();

    return 0;
}
