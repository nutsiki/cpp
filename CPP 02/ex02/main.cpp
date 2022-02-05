#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed c(a);
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << 1 /roundf(1 << 8) << std::endl;
    std::cout << "a vaut " << a << std::endl;
    std::cout << "++a vaut " << ++a << std::endl;
    std::cout << "a vaut " << a << std::endl;
    std::cout << "a++ vaut " << a++ << std::endl;
    std::cout << "a vaut " << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;
    std::cout << a*2 << std::endl;
    std::cout << a << std::endl;
    std::cout << a/2 << std::endl;
    std::cout << a.operator<(0) << std::endl;
    std::cout << a.operator<(1) << std::endl;
    std::cout << a.operator>(0) << std::endl;
    std::cout << a.operator>(1) << std::endl;
    return (0);
}
