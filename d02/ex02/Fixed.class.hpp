#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H
#include <cmath>
#include <iostream>

class Fixed
{
    private:
        int              _fixedpointvalue;
        static const int _nbFractionalbits;
    
    public:
        Fixed(void);
        Fixed(const float floater);
        Fixed(const int integer);
        Fixed(Fixed const &src);
        ~Fixed(void);
        
        int     get_value(void) const;
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed &operator=(Fixed const &rhs);
        bool operator>(Fixed const &rhs);
        bool operator<(Fixed const &rhs);
        bool operator>=(Fixed const &rhs);
        bool operator<=(Fixed const &rhs);
        bool operator==(Fixed const &rhs);
        bool operator!=(Fixed const &rhs);
        Fixed operator+(Fixed const &rhs) const;
        Fixed operator-(Fixed const &rhs) const;
        Fixed operator*(Fixed const &rhs) const;
        Fixed operator/(Fixed const &rhs) const;
        Fixed operator++(int);
        Fixed operator++();
        Fixed operator--(int);
        Fixed operator--();
        
};

float toFloa( int flo);
Fixed &min(Fixed &fix1, Fixed &fix2);
Fixed max(Fixed fix1, Fixed fix2);
std::ostream &operator<<(std::ostream &o, Fixed const &rhs);
#endif