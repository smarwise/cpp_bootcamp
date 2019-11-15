#include "Form.hpp"

class Form;

class ShrubberyCreationForm: private Form
{
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string name);
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm   &operator=(ShrubberyCreationForm const &rhs);

};