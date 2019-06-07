#include "InputReader.class.hpp"

InputReader::InputReader(void)
{

}

InputReader::InputReader(std::string argv)
{
    this->argv = argv;
}

std::string *InputReader::get_args(std::string  *args)
{
    std::istringstream ss(this->argv);
    int i = 0;
    while (ss >> args[i])
    {
        i++;
    }
    return (args);
}

InputReader::~InputReader(void)
{

}