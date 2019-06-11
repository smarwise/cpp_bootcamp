#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string name)
{
    std::string *pointer;

    pointer = (std::string *)&this->_name;
    *pointer = name;
    std::cout << "Bureaucrat created" << std::endl;
}

Bureaucrat::Bureaucrat(int grade)
{
    try
    {
        if (grade < 1)
        {
            throw 1;
        }
        else if (grade > 150)
        {
            throw 2;
        }
        else
        {
            this->_grade = grade;
            std::cout << "Bureaucrat created" << std::endl;
        }
    }
    catch (int n)
    {
        if (n == 1)
            this->GradeTooHighException();
        if (n == 2)
            this->GradeTooLowException();
    }
}

void Bureaucrat::GradeTooLowException()
{
    std::cout << "Grade too low" << std::endl;
}

void Bureaucrat::GradeTooHighException()
{
    std::cout << "Grade too high" << std::endl;
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
    this->_grade--;
    try
    {
        if (this->_grade < 1)
        {
            throw 1;
        }
    }
    catch (int n)
    {
        this->GradeTooHighException();
        this->_grade = 1;
    }
}

void    Bureaucrat::decrementGrade()
{
    std::cout << "Decrement grade called" << std::endl;
    this->_grade++;
    try
    {
        if (this->_grade > 150)
        {
            throw 1;
        }
    }
    catch (int n)
    {
        this->GradeTooLowException();
        this->_grade = 150;
    }
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    this->_grade = rhs._grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{

}

std::ostream &operator<<(std::ostream &o,  Bureaucrat const &rhs)
{
    o << rhs.getGrade();
    o << std::endl;
    return (o);
}