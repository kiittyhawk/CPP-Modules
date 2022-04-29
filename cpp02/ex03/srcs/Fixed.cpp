#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->_value = 0;
}

Fixed::Fixed(const int parameter)
{
    this->_value = parameter << Fixed::_NUM_BITS;
    return ;
}

Fixed::Fixed(const float parameter)
{
    this->_value = roundf(parameter * (1 << Fixed::_NUM_BITS));
    return ;
}

Fixed::Fixed(Fixed const &fixed)
{
    *this = fixed;
}

Fixed::~Fixed(void)
{
    this->_value = 0;
}

int Fixed::getRawBits(void) const
{
    return (this->_value);
}

void    Fixed::setRawBits(const int raw)
{
    this->_value = raw;
}

int Fixed::toInt(void) const
{
    return (this->getRawBits() >> Fixed::_NUM_BITS);
}

float   Fixed::toFloat(void) const
{
    return (((float)this->getRawBits()) / (1 << Fixed::_NUM_BITS));
}

std::ostream& operator<<(std::ostream &stream, const Fixed &fixed)
{
    return (stream << fixed.toFloat());
}

bool    Fixed::operator>(Fixed const &other) const
{
    return (this->getRawBits() > other.getRawBits());
}

bool    Fixed::operator<(Fixed const &other) const
{
    return (this->getRawBits() < other.getRawBits());
}

bool    Fixed::operator>=(Fixed const &other) const
{
    return (this->getRawBits() >= other.getRawBits());
}

bool    Fixed::operator<=(Fixed const &other) const
{
    return (this->getRawBits() <= other.getRawBits());
}

bool    Fixed::operator==(Fixed const &other) const
{
    return (this->getRawBits() == other.getRawBits());
}

bool    Fixed::operator!=(Fixed const &other) const
{
    return (this->getRawBits() != other.getRawBits());
}

Fixed&  Fixed::operator=(Fixed const &other)
{
    if (this != &other)
        this->_value = other.getRawBits();
    return (*this);
}

Fixed   Fixed::operator+(Fixed const &other) const
{
    return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed   Fixed::operator-(Fixed const &other) const
{
    return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed   Fixed::operator*(Fixed const &other) const
{
    return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed   Fixed::operator/(Fixed const &other) const
{
    return (Fixed(this->getRawBits() / other.getRawBits()));
}

Fixed&  Fixed::operator++(void)
{
    this->_value++;
    return (*this);
}

Fixed&  Fixed::operator--(void)
{
    this->_value--;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed   tmp(*this);
    operator++();
    return (tmp);
}

Fixed   Fixed::operator--(int)
{
    Fixed   tmp(*this);
    operator--();
    return (tmp);
}

Fixed&  Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed&  Fixed::max(Fixed &a, Fixed &b)
{
    if (a < b)
        return (b);
    return (a);
}

const Fixed&  Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed&  Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a < b)
        return (b);
    return (a);
}
