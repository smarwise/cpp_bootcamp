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
    this->_fixedpointvalue = integer * 256;
}

Fixed::Fixed(const float floater)
{
    this->_fixedpointvalue = roundf(floater * ( 256));
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
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
    return Fixed((toFloa(this->get_value())) + toFloa(rhs._fixedpointvalue));
}

Fixed Fixed::operator-(Fixed const &rhs)const
{
    return Fixed((toFloa(this->get_value())) - toFloa(rhs._fixedpointvalue));
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
    return Fixed((toFloa(this->get_value())) * toFloa(rhs._fixedpointvalue));
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
}

float toFloa( int flo)
{
    return ((float)(flo) / 256);
}

float Fixed::toFloat( void ) const
{
    return ((float)(this->_fixedpointvalue) / (256));
}

int Fixed::toInt( void ) const
{
    return (this->_fixedpointvalue / 256);
}

std::ostream &operator<<(std::ostream &o,  Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}