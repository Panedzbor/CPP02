#include "Point.hpp"

Point& Point::operator=(const Point& original)
{
    std::cout << "const members cannot be reassigned\n";
    (void)original;
    return (*this);
}

const Fixed Point::getPx(void) const
{
    return (x);
}

const Fixed Point::getPy(void) const
{
    return (y);
}