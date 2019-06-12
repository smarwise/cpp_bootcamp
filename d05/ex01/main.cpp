#include "Form.hpp"
#include "Bureaucrat.hpp"

int     main(void)
{
    Bureaucrat checklow = Bureaucrat("One", 150);
    Bureaucrat checkhigh = Bureaucrat("Two", 1);
    Bureaucrat checkmid = Bureaucrat("Three", 78);
    Bureaucrat checkerr = Bureaucrat("Four", -1);
    Form form("cool");
    Form former("cooler");

    checklow.signForm(form);
    checkmid.signForm(form);
    checkmid.incrementGrade();
    checkmid.incrementGrade();
    checkmid.incrementGrade();
    checkmid.signForm(form);
    std::cout << form;
    checkerr.signForm(form);
    std::cout << former;
    checkerr.signForm(former);
}