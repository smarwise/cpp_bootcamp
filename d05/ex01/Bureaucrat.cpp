#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}
Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
    *this = src;
    return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    try
    {
        set_grade(grade);
        std::cout << "Bureaucrat " << this->_name << " created" << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void Bureaucrat::set_grade(int grade)
{
    if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else
    {
        this->_grade = grade;
    }
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void    Bureaucrat::incrementGrade()
{
    std::cout << "Increment grade called" << std::endl;
    try
    {
        set_grade(this->getGrade() - 1);
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void    Bureaucrat::decrementGrade()
{
    std::cout << "Decrement grade called" << std::endl;
    try
    {
        set_grade(this->getGrade() + 1);
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    this->_grade = rhs._grade;
    return *this;
}

void        Bureaucrat::signForm(Form &form)
{
    try 
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signs " << form.getName() << " form." << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << this->getName() << " could not sign form " << form.getName() << " because the ";
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << this->getName() << " could not sign form " << form.getName() << " because the ";
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::FormAlreadySignedException &e)
    {
        std::cout << this->getName() << " could not sign form " << form.getName() << " because the ";
        std::cout << e.what() << std::endl;
    }
}

Bureaucrat::~Bureaucrat()
{

}

std::ostream &operator<<(std::ostream &o,  Bureaucrat const &rhs)
{
    o << "Name: ";
    o << rhs.getName();
    o << ", Grade: ";
    o << rhs.getGrade();
    o << std::endl;
    return (o);
}