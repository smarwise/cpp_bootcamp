#include "Converter.hpp"
#include <iomanip>

Converter::Converter()
{
}

Converter::Converter(Converter const &src)
{
    *this = src;
    return;
}

Converter &Converter::operator=(Converter const &rhs)
{
    this->char_ =  rhs.getChar();
    return *this;
}

Converter::Converter(char *str)
{
    std::cout << std::fixed;
    try
    {
        this->charHandler(str);
        std::cout << "char: '" << this->char_  << "'"<< std::endl; 
    }
    catch (Converter::Char &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Converter::Undisplayable &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "char: impossible" << std::endl;
    }
    try
    {
        this->intHandler(str);
        std::cout << "int: " << this->int_ << std::endl; 
    }
    catch (Converter::Int &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "int: impossible" << std::endl;
    }
     try
    {
        this->floatHandler(str);
        std::cout << std::setprecision(1);
        std::cout << "float: " << this->float_ << "f" << std::endl; 
    }
    catch (Converter::Float &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "float: impossible" << std::endl;
    }
    try
    {
        this->doubleHandler(str);
        std::cout << "double: " << this->double_ << std::endl; 
    }
    catch (Converter::Double &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "double: impossible" << std::endl;
    }
}

void    Converter::charHandler(char  *str)
{
    float f = 0.0;
    if (!(f = std::stof(str)))
    {
        throw Converter::Char();
    }
    else
    {
        if (!(this->char_ = static_cast<char>(f)))
            throw Converter::Char();
        if (!(isprint(this->char_)))
            throw Converter::Undisplayable();
    }
    
}

void    Converter::doubleHandler(char  *str)
{
    float f = 0.0;
    if (!(f = std::stof(str)))
    {
        throw Converter::Double();
    }
    else
    {
        if (!(this->double_ = static_cast<double>(f)))
            throw Converter::Double();
    }
}

void    Converter::floatHandler(char  *str)
{
    float f = 0.0;
    if (!(f = std::stof(str)))
    {
        throw Converter::Float();
    }
    else
    {
        if (!(this->float_ = static_cast<float>(f)))
            throw Converter::Float();
    }
}

void    Converter::intHandler(char  *str)
{
    float f = 0.0;
    if (!(f = std::stof(str)))
    {
        throw Converter::Int();
    }
    else
    {
        if (!(this->int_ = static_cast<int>(f)))
            throw Converter::Int();
        if (this->int_ == INT_MIN || this->int_ == INT_MAX)
            throw Converter::Int();
    }
}

float   Converter::getFloat() const
{
    return (this->float_);
}

int     Converter::getInt() const
{
    return (this->int_);
}

double  Converter::getDouble() const
{
    return (this->double_);
}

char    Converter::getChar() const
{
    return (this->char_);
}

const char* Converter::IncorrectArgs::what() const throw()
{
    return ("Incorrect number of arguments");
}

const char* Converter::Int::what() const throw()
{
    return ("int: impossible");
}

const char* Converter::Char::what() const throw()
{
    return ("char: impossible");
}

const char* Converter::Float::what() const throw()
{
    return ("float: impossible");
}

const char* Converter::Double::what() const throw()
{
    return ("double: impossible");
}

const char* Converter::Undisplayable::what() const throw()
{
    return ("undisplayable character");
}

const char* Converter::InvalidInput::what() const throw()
{
    return ("Invalid Input");
}

std::ostream &operator<<(std::ostream &o,  Converter const &rhs)
{
    o << rhs.getChar();
    o << "here";
    return (o);
}

Converter::~Converter()
{
}