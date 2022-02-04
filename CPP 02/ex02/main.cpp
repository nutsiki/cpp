#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed c(a);
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << "a vaut " << a << std::endl;
    std::cout << "++a vaut " << ++a << std::endl;
    std::cout << "a vaut " << a << std::endl;
    std::cout << "a++ vaut " << a++ << std::endl;
    std::cout << "a vaut " << a << std::endl;
    std::cout << b << std::endl;
//    std::cout << Fixed::max(a, b) << std::endl;
    return (0);
}
