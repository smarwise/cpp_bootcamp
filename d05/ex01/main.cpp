#include "Form.hpp"
#include "Bureaucrat.hpp"

int     main(void)
{
    Bureaucrat checklow = Bureaucrat("One", 150);
    Bureaucrat checkhigh = Bureaucrat("Two", 1);
    Bureaucrat checkmid = Bureaucrat("Three", 78);
    Bureaucrat checkerr = Bureaucrat("Four", -1);
    Form form("cool", 130, 10);
    Form former("cooler", 76, 10);
    Form formest("coolest", 155, 10);
    checklow.signForm(form);
    checkmid.signForm(form);
    checkmid.incrementGrade();
    checkmid.signForm(form);
    std::cout << form;
    checkhigh.signForm(form);
    std::cout << former;
    checkhigh.signForm(former);
}