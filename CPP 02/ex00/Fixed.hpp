#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

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
};

#endif