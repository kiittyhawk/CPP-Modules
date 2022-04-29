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

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        float   toFloat( void ) const;
        int     toInt( void ) const;

        bool 	operator>(Fixed const &other) const;
		bool 	operator<(Fixed const &other) const;
		bool 	operator>=(Fixed const &other) const;
		bool 	operator<=(Fixed const &other) const;
		bool 	operator==(Fixed const &other) const;
		bool 	operator!=(Fixed const &other) const;

		Fixed	&operator=(Fixed const &other);
		Fixed 	operator+(Fixed const &other) const;
		Fixed 	operator-(Fixed const &other) const;
		Fixed 	operator*(Fixed const &other) const;
		Fixed 	operator/(Fixed const &other) const;

		Fixed 	&operator++(void);
		Fixed 	operator++(int);
		Fixed 	&operator--(void);
		Fixed 	operator--(int);

		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		const static Fixed &min(Fixed const &a, Fixed const &b);
		const static Fixed &max(Fixed const &a, Fixed const &b);
};

std::ostream 	&operator<<(std::ostream &stream, const Fixed &fixed);

#endif