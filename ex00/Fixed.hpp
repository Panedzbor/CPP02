#ifndef FIXED_H
#define FIXED_H

class Fixed {
    private:
        int val;
        static const int b = 8;
    public:
        Fixed();
        Fixed(const Fixed& original);
        Fixed& operator=(const Fixed& original);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif