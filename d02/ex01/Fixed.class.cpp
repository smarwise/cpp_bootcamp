#include "Fixed.class.hpp"
// #include <iostream>

const int Fixed::_nbFractionalbits = 8;

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixedpointvalue = 0;
    return;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called" << std::endl;;
    this->_fixedpointvalue = integer << this->_nbFractionalbits;
}

Fixed::Fixed(const float floater)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedpointvalue = roundf(floater * ( 1 << this->_nbFractionalbits ));
}
float Fixed::toFloat( void ) const
{
    return ((float)(this->_fixedpointvalue) / (1 << this->_nbFractionalbits));// (pow (2, this->_nbFractionalbits)));
}

int Fixed::toInt( void ) const
{
    return (this->_fixedpointvalue >> this->_nbFractionalbits);
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_fixedpointvalue = rhs._fixedpointvalue;
    return *this;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &o,  Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}