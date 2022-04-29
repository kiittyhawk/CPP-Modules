#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        static const int    _NUM_BITS = 8;
        int                 _value;
    
    public:
        Fixed(void);
        Fixed(const int parameter);
        Fixed(const float parameter);
        Fixed(const Fixed &fixed);
        ~Fixed(void);

        Fixed   &operator=(const Fixed &fixed);

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        float   toFloat( void ) const;
        int     toInt( void ) const;
};

std::ostream 	&operator<<(std::ostream &stream, const Fixed &fixed);

#endif