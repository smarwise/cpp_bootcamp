#include "Bureaucrat.hpp"

int     main(void)
{
    Bureaucrat checklow = Bureaucrat("One", 150);
    Bureaucrat checkhigh = Bureaucrat("Two", 1);
    Bureaucrat checkmid = Bureaucrat("Three", 78);
    Bureaucrat checkerr = Bureaucrat("Four", -1);

    std::cout << checklow;
    checklow.decrementGrade();
    std::cout << checklow;
    checklow.incrementGrade();
    std::cout << checklow;
    std::cout << checkhigh;
    checkhigh.incrementGrade();
    std::cout << checkhigh;
    std::cout << checkmid;
    checkmid.incrementGrade();
    std::cout << checkmid;
    std::cout << checkerr;
}