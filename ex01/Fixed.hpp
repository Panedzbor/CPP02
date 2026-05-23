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
        Fixed& operator=(const Fixed& original);
        ~Fixed();
        float toFloat(void) const;
        int toInt(void) const; 
};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif