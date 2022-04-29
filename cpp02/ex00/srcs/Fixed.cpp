#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
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

Fixed &Fixed::operator=(Fixed const &fixed)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &fixed)
        this->setRawBits(fixed.getRawBits());
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void    Fixed::setRawBits(const int raw)
{
    this->_value = raw;
}
