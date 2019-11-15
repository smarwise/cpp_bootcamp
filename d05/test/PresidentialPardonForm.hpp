#include "Form.hpp"

class Form;

class PresidentialPardonForm: Form
{
    PresidentialPardonForm();
    PresidentialPardonForm(std::string name);
    PresidentialPardonForm(PresidentialPardonForm const &src);
    ~PresidentialPardonForm();
    PresidentialPardonForm   &operator=(PresidentialPardonForm const &rhs);

    private:
        std::string name;
};