#ifndef FIXED_H
#define FIXED_H

# include <cmath>
# include <iostream>

class Fixed {
    private:
        int val;
        static const int b = 8;
    public:
        Fixed();
        Fixed(const Fixed& original);
        Fixed(const int val);
        Fixed(const float val);
        ~Fixed();
        Fixed& operator=(const Fixed& original);
        bool operator>(const Fixed& obj) const;
        bool operator<(const Fixed& obj) const;
        bool operator>=(const Fixed& obj) const;
        bool operator<=(const Fixed& obj) const;
        bool operator==(const Fixed& obj) const;
        bool operator!=(const Fixed& obj) const;
        Fixed operator+(const Fixed& obj) const;
        Fixed operator-(const Fixed& obj) const;
        Fixed operator*(const Fixed& obj) const;
        Fixed operator/(const Fixed& obj) const;
        Fixed& operator--();
        Fixed& operator++();
        Fixed  operator--(int);
        Fixed  operator++(int);
        static Fixed& min(Fixed& n1, Fixed& n2);
        static const Fixed& min(const Fixed& n1, const Fixed& n2);
        static Fixed& max(Fixed& n1, Fixed& n2);
        static const Fixed& max(const Fixed& n1, const Fixed& n2);
        float toFloat(void) const;
        int toInt(void) const; 
};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif