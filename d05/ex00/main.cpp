#include "Bureaucrat.hpp"

int     main(void)
{
    Bureaucrat checklow = Bureaucrat("One");
    Bureaucrat checkhigh = Bureaucrat("Two");
    Bureaucrat checkmid = Bureaucrat("Three");

    checklow.set_grade(150);
    std::cout << checklow;
    checklow.decrementGrade();
    std::cout << checklow;
    checklow.incrementGrade();
    std::cout << checklow;
    checkhigh.set_grade(1);
    std::cout << checkhigh;
    checkhigh.incrementGrade();
    std::cout << checkhigh;
    checkmid.set_grade(78);
    std::cout << checkmid;
    checkmid.incrementGrade();
    std::cout << checkmid;
}