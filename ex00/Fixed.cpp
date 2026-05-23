#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    val = 0;
}

Fixed::Fixed(const Fixed& original)
{
    std::cout << "Copy constructor called\n";
    operator=(original);
}

Fixed& Fixed::operator=(const Fixed& original)
{
    std::cout << "Copy assignment operator called\n";
    setRawBits(original.getRawBits());
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return (val);
}

void Fixed::setRawBits(int const raw)
{
    val = raw;
}