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
        
        Fixed &operator=(Fixed const &rhs);
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif