#ifndef CONVERTER_HPP
#define CONVERTER_HPP
#include <ostream>
#include <string>
#include <iostream>

class Converter
{
    public:
        Converter();
        Converter(char *str);
        ~Converter();
        Converter(Converter const &src);
        Converter &operator=(Converter const &rhs);
        float   getFloat() const;
        int     getInt() const;
        double  getDouble() const;
        char    getChar() const;
        void    charHandler(char  *str);
        void    doubleHandler(char  *str);
        void    intHandler(char  *str);
        void    floatHandler(char  *str);
        class   IncorrectArgs : public std::exception
        {
            public:
            virtual const char* what() const throw();
        };
        class   Char : public std::exception
        {
            public:
            virtual const char* what() const throw();
        };
        class   Int : public std::exception
        {
            public:
            virtual const char* what() const throw();
        };
        class   Float : public std::exception
        {
            public:
            virtual const char* what() const throw();
        };
        class   Double : public std::exception
        {
            public:
            virtual const char* what() const throw();
        };
        class   InvalidInput : public std::exception
        {
            public:
            virtual const char* what() const throw();
        };
        class   Undisplayable : public std::exception
        {
            public:
            virtual const char* what() const throw();
        };
    private:
        float   float_;
        int     int_;
        char    char_;
        double  double_;
};

std::ostream &operator<<(std::ostream &o,  Converter const &rhs);

#endif