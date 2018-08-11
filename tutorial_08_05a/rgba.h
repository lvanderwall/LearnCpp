#ifndef RGBA_H
#define RGBA_H

#include <iostream>
#include <cstdint>      // for std::uint8_t


class RGBA
{
public:
    // prints formatted RGBA information
    void print()
    {
        std::cout << "r=" << static_cast<int>(m_red) <<
                    " g=" << static_cast<int>(m_green) <<
                    " b=" << static_cast<int>(m_blue) <<
                    " a=" << static_cast<int>(m_alpha) << '\n';
    }

private:
    std::uint8_t m_red;
    std::uint8_t m_green;
    std::uint8_t m_blue;
    std::uint8_t m_alpha;

public:
    // default ctor
    RGBA(std::uint8_t r = 0, std::uint8_t g = 0, std::uint8_t b = 0, std::uint8_t a = 255)
        : m_red{r},
          m_green{g},
          m_blue{b},
          m_alpha{a}
    {} // nothing more to assign
};

#endif // RGBA_H
