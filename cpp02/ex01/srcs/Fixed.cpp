#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int parameter)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = parameter << Fixed::_NUM_BITS;
    return ;
}

Fixed::Fixed(const float parameter)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(parameter * (1 << Fixed::_NUM_BITS));
    return ;
}

Fixed &Fixed::operator=(Fixed const &fixed)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &fixed)
        this->setRawBits(fixed.getRawBits());
    return (*this);
}

Fixed::Fixed(Fixed const &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
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