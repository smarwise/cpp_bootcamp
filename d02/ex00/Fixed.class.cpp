#include "Fixed.class.hpp"
#include <iostream>

const int Fixed::_nbFractionalbits = 8;

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    _fixedpointvalue = 0;
    return;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedpointvalue;
}

void Fixed::setRawBits( int const raw )
{
    this->_fixedpointvalue = raw;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_fixedpointvalue = rhs.getRawBits();
    return *this;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}