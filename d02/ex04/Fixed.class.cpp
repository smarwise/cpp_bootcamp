#include "Fixed.class.hpp"
const int Fixed::_nbFractionalbits = 8;

Fixed::Fixed(void)
{
    this->_fixedpointvalue = 0;
    return;
}

Fixed::Fixed(Fixed const &src)
{
    *this = src;
    return;
}

Fixed::Fixed(const int integer)
{
    // std::cout << "Int constructor called" << std::endl;;
    this->_fixedpointvalue = integer << this->_nbFractionalbits;
}

Fixed::Fixed(const float floater)
{
    // std::cout << "Float constructor called" << std::endl;
    this->_fixedpointvalue = roundf(floater * ( 1 << this->_nbFractionalbits ));
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    // std::cout << "Assignation operator called" << std::endl;
    this->_fixedpointvalue = rhs._fixedpointvalue;
    return *this;
}

bool Fixed::operator>(Fixed const &rhs)
{
    return (this->get_value() > rhs._fixedpointvalue);
}

bool Fixed::operator<(Fixed const &rhs)
{
    return (get_value() < rhs._fixedpointvalue);
}

bool Fixed::operator>=(Fixed const &rhs)
{
    return (get_value() >= rhs._fixedpointvalue);
}

bool Fixed::operator<=(Fixed const &rhs)
{
    return (get_value() <= rhs._fixedpointvalue);
}

bool Fixed::operator==(Fixed const &rhs)
{
    return (this->get_value() == rhs._fixedpointvalue);
}

bool Fixed::operator!=(Fixed const &rhs)
{
    return (get_value() != rhs._fixedpointvalue);
}

int     Fixed::get_value(void) const
{
    return this->_fixedpointvalue;
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
    return Fixed(this->get_value() + rhs._fixedpointvalue);
}

Fixed Fixed::operator-(Fixed const &rhs)const
{
    return Fixed(this->get_value() - rhs._fixedpointvalue);
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
    return Fixed((toFloa(this->get_value())) / toFloa(rhs._fixedpointvalue));
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
    return Fixed((toFloa(this->get_value())) / toFloa(rhs._fixedpointvalue));
}

Fixed Fixed::operator++(int)
{
    const Fixed old(*this);
    ++(*this);
    return (old);
}

Fixed Fixed::operator++()
{
    this->_fixedpointvalue++;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    
    const Fixed old(*this);
    --(*this);
    return (old);
}

Fixed Fixed::operator--()
{
    this->_fixedpointvalue--;
    return (*this);
}

Fixed &min(Fixed &fix1, Fixed &fix2)
{
    if (fix1.get_value() > fix2.get_value())
    {
        return (fix2);
    }
    else
        return(fix1);

}

Fixed max(Fixed fix1, Fixed fix2)
{
    if (fix1.get_value() > fix2.get_value())
    {
        return (fix1);
    }
    else
        return(fix2);

}

Fixed::~Fixed(void)
{
    // std::cout << "Destructor called" << std::endl;
}

float toFloa( int flo)
{
    return ((float)(flo) / (1 << 8));// (pow (2, this->_nbFractionalbits)));
}

float Fixed::toFloat( void ) const
{
    return ((float)(this->_fixedpointvalue) / (1 << this->_nbFractionalbits));// (pow (2, this->_nbFractionalbits)));
}

int Fixed::toInt( void ) const
{
    return (this->_fixedpointvalue >> this->_nbFractionalbits);
}

std::ostream &operator<<(std::ostream &o,  Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}