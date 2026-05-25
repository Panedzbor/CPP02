#include <iostream>
#include "Fixed.hpp"

static void subject_test(void);
static void my_test(void);

int main( void ) 
{
    char inp;
    std::cout << "Choose '1' for subject tests or '2' for own tests: ";
    std::cin >> inp;
    if (inp == '1')
        subject_test();
    if (inp == '2')
        my_test();
    return 0;
}

static void subject_test(void)
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    
    std::cout << Fixed::max( a, b ) << std::endl;
}

static void my_test(void)
{
    std::cout << "MY OWN TESTS\n\n";

    std::cout << "Fixed a:\n";
    Fixed a;
    std::cout << "a = " << a << '\n';
    
    std::cout << "Fixed b(a):\n";
    Fixed b(a);
    std::cout << "b = " << b << '\n';
    
    std::cout << "Fixed c(3)\n";
    Fixed c(3);
    std::cout << "c = " << c << '\n';
    
    std::cout << "Fixed d(7.0f)\n";
    Fixed d(7.0f);
    std::cout << "d = " << d << '\n';

    std::cout << "a = c\n";
    a = c;
    std::cout << "a = " << a << '\n';

    bool r;
    std::cout << std::boolalpha;
    std::cout << "a > b\n";
    r = a > b;
    std::cout << "a(" << a  << ") > b(" << b << "): " << r << '\n';

    std::cout << "a >= c\n";
    r = a >= c;
    std::cout << "a(" << a << ") >= c(" << c << "): " << r << '\n';

    std::cout << "d < c\n";
    r = d < c;
    std::cout << "d(" << d << ") < c(" << c << "): " << r << '\n';

    std::cout << "b <= a\n";
    r = b <= a;
    std::cout << "b(" << b << ") <= a(" << a << "): " << r << '\n';

    std::cout << "a == c\n";
    r = a == c;
    std::cout << "a(" << a << ") == c(" << c << "): " << r << '\n';

    std::cout << "b != d\n";
    r = b != d;
    std::cout << "b(" << b << ") != d(" << d << "): " << r << '\n';

    std::cout << "Fixed x(b(" << b << ") + d(" << d << ")\n";
    Fixed x(b + d);
    std::cout << "x = " << x << '\n';

    std::cout << "x = (a(" << a << ") - d(" << d << ")\n";
    x = a - d;
    std::cout << "x = " << x << '\n';

    std::cout << "x = (c(" << c << ") / a(" << a << ")\n";
    x = c / a;
    std::cout << "x = " << x << '\n';

    std::cout << "x = (b(" << b << ") * c(" << c << ")\n";
    x = b * c;
    std::cout << "x = " << x << '\n';

    std::cout << "a = " << a << '\n';
    std::cout << "cout << --a:" << --a << "\n";
    std::cout << "cout << a++:\n" << a++ << "\n";
    std::cout << "a = " << a << "\n";

    std::cout << "b = " << b << "\n";
    std::cout << "cout << b--: " << b-- << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "cout << ++b: " << ++b << "\n";

    std::cout << "x = Fixed::min(a(" << a << "), b(" << b << ")):\n";
    x = Fixed::min(a, b);
    std::cout << "x = " << x << '\n';

    std::cout << "x = Fixed::max(c(" << c << "), d(" << d << ")):\n";
    x = Fixed::max(c, d);
    std::cout << "x = " << x << '\n';

    std::cout << "\nDo you want to test division by 0? (crash expected | '1' for yes: ";
    char input;
    std::cin >> input;
    if (input == '1')
    {
        std::cout << "x = (c(" << c << ") / b(" << b << ")\n";
        x = c / b;
        std::cout << "x = " << x << '\n';
    }
}