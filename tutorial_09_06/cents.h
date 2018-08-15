#ifndef CENTS_H
#define CENTS_H

class Cents
{
public:
    friend bool operator> (const Cents &c1, const Cents &c2);
    friend bool operator<=(const Cents &c1, const Cents &c2);

    friend bool operator< (const Cents &c1, const Cents &c2);
    friend bool operator>=(const Cents &c1, const Cents &c2);

private:
    int m_cents;

public:
    Cents(int cents = 0)
        : m_cents{cents}
    {}
};

#endif // CENTS_H
