#ifndef INPUTREADER_CLASS_H
#define INPUTREADER_CLASS_H
#include <string.h>
#include "Fixed.class.hpp"
#include <ostream>
#include <istream>
#include <sstream>

class InputReader
{
    public:

        InputReader(void);
        InputReader(std::string argv);
        ~InputReader(void);

        std::string *get_args(std::string  *args);
        // std::string *get_numbers();
        // std::string *get_operators();

        // std::string *args;
        // std::string *numbers;
        // std::string *operators;
        std::string argv;
};

#endif