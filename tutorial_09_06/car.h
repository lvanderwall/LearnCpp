#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>


class Car
{
public:
    friend bool operator==(const Car &c1, const Car &c2);
    friend bool operator!=(const Car &c1, const Car &c2);

    // orders cars by make, then by model
    friend bool operator< (const Car &c1, const Car &c2);

    // formatted output to console
    friend std::ostream& operator<<(std::ostream &out, const Car &c);

private:
    std::string m_make;
    std::string m_model;

public:
    Car(std::string make, std::string model)
        : m_make(make),
          m_model(model)
    {}
};

#endif // CAR_H
