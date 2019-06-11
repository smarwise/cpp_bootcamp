#include "Bureaucrat.hpp"

int     main(void)
{
    Bureaucrat checklow = Bureaucrat(150);
    Bureaucrat checkhigh = Bureaucrat(1);
    Bureaucrat checkmid= Bureaucrat(50);

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
}