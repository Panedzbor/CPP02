#include "Fixed.hpp"

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

Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called\n";
    this->val = val << b;
}

int Fixed::toInt(void) const
{
    return (val >> b);
}

Fixed::Fixed(const float val)
{
    std::cout << "Float constructor called\n";
    this->val = static_cast<int>(roundf(val * (1 << b)));
}

float Fixed::toFloat(void) const
{
    return (static_cast<float>(val) / static_cast<float>(1 << b));
}

Fixed& Fixed::operator=(const Fixed& original)
{
    std::cout << "Copy assignment operator called\n";
    this->val = original.val;
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
    out << obj.toFloat();
    return (out);
}