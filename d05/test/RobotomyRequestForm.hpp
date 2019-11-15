#include "Form.hpp"

class Form;

class RobotomyRequestForm: Form
{
    RobotomyRequestForm();
    RobotomyRequestForm(std::string name);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    ~RobotomyRequestForm();
    RobotomyRequestForm   &operator=(RobotomyRequestForm const &rhs);

    private:
        std::string name;
};