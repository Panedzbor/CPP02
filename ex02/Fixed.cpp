#include "Fixed.hpp"

Fixed::Fixed() : val(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& original) : val(original.val)
{
    std::cout << "Copy constructor called\n";
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

bool Fixed::operator>(const Fixed& obj) const
{
    return (this->val > obj.val);
}

bool Fixed::operator<(const Fixed& obj) const
{
    return (this->val < obj.val);
}

bool Fixed::operator>=(const Fixed& obj) const
{
    return (this->val >= obj.val);
}

bool Fixed::operator<=(const Fixed& obj) const
{
    return (this->val <= obj.val);
}

bool Fixed::operator==(const Fixed& obj) const
{
    return (this->val == obj.val);
}

bool Fixed::operator!=(const Fixed& obj) const
{
    return (this->val != obj.val);
}

Fixed Fixed::operator+(const Fixed& obj) const
{
    Fixed tmp;

    tmp.val = this->val + obj.val;
    return (tmp);
}

Fixed Fixed::operator-(const Fixed& obj) const
{
    Fixed tmp;

    tmp.val = this->val - obj.val;
    return (tmp);
}

Fixed Fixed::operator*(const Fixed& obj) const
{
    Fixed tmp;

    tmp.val = static_cast<int>((static_cast<long long>(this->val) * obj.val) >> b);
    return (tmp);
}

Fixed Fixed::operator/(const Fixed& obj) const
{
    Fixed tmp;

    tmp.val = static_cast<int>((static_cast<long long>(this->val) << b) / obj.val);
    return (tmp);
}

Fixed& Fixed::operator--()
{
    this->val--;
    return (*this);
}

Fixed& Fixed::operator++()
{
    this->val++;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    val--;
    return (tmp);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    val++;
    return (tmp);
}

Fixed& Fixed::min(Fixed& n1, Fixed& n2)
{
    return (n1 < n2 ? n1 : n2);
}

const Fixed& Fixed::min(const Fixed& n1, const Fixed& n2)
{
    return (n1 < n2 ? n1 : n2);
}

Fixed& Fixed::max(Fixed& n1, Fixed& n2)
{
    return (n1 > n2 ? n1 : n2);
}

const Fixed& Fixed::max(const Fixed& n1, const Fixed& n2)
{
    return (n1 > n2 ? n1 : n2);
}