#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        static const int    _NUM_BITS = 8;
        int                 _value;
    
    public:
        Fixed(void);
        Fixed(const Fixed &fixed);
        ~Fixed(void);

        Fixed   &operator=(const Fixed &fixed);
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
};

#endif