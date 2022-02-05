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

Fixed::Fixed(const int nb_int)
{
    std::cout << "Int constructor called" << std::endl;
    this->m_value = nb_int << m_bit_frac;
    return;
}

Fixed::Fixed(const float nb_float)
{
    std::cout << "Float constructor called" << std::endl;
    this->m_value = roundf(nb_float * (1 << m_bit_frac));
    return;
}

int Fixed::toInt() const
{
    return (this->m_value >> m_bit_frac);
}

float Fixed::toFloat() const
{
    return ((float)((this->m_value) / (roundf(1 << m_bit_frac))));
}

std::ostream &operator<<(std::ostream &out, const Fixed &in)
{
    out << in.toFloat();
    return (out);
}