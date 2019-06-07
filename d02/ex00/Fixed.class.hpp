#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H

class Fixed
{
    private:
        int              _fixedpointvalue;
        static const int _nbFractionalbits;
    
    public:
        Fixed(void);
        Fixed(Fixed const &src);
        ~Fixed(void);
        
        Fixed &operator=(Fixed const &rhs);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif

// At least one default constructor
// a copy contructor
//  an assignation operator overload
//  and a destructor.