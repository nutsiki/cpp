#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
private:
    int m_value;
    static const int m_bit_frac = 8;
public:
    Fixed(void);
    ~Fixed(void);
    Fixed(const Fixed &src);
    Fixed &operator=(const Fixed &new_cp);
    int getRawBits(void) const;
    void setRawBits(int const raw);

    Fixed(const int nb_int);
    Fixed(const float nb_float);
    float toFloat(void) const;
    int toInt(void) const;

    bool	operator>(const Fixed &cp) const;
    bool	operator<(const Fixed &cp) const;
    bool	operator>=(const Fixed &cp) const;
    bool	operator<=(const Fixed &cp) const;
    bool	operator==(const Fixed &cp) const;
    bool	operator!=(const Fixed &cp) const;

    Fixed	operator+(const Fixed &cp) const;
    Fixed	operator-(const Fixed &cp) const;
    Fixed	operator*(const Fixed &cp) const;
    Fixed	operator/(const Fixed &cp) const;

    Fixed 	&operator++(void);
    Fixed 	&operator--(void);
    Fixed	operator++(int);
    Fixed	operator--(int);

    static Fixed		&min(Fixed &nb_a, Fixed &nb_b);
    static const Fixed	&min(const Fixed &nb_a, const Fixed &nb_b);
    static Fixed		&max(Fixed &nb_a, Fixed &nb_b);
    static const Fixed	&max(const Fixed &nb_a, const Fixed &nb_b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &in);

#endif