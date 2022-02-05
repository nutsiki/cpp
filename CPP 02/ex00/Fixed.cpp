#include "Fixed.hpp"

Fixed::Fixed(void) :m_value(0)
{
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

Fixed::Fixed(const Fixed &cp)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cp;
    return;
}

Fixed &Fixed::operator=(const Fixed &new_cp)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &new_cp)
        this->setRawBits(new_cp.getRawBits());
    return (*this);
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->m_value);
}

void    Fixed::setRawBits(int const raw)
{
    this->m_value = raw;
    return;
}