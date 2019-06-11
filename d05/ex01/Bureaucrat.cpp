#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string name)
{
    std::string *pointer;

    pointer = (std::string *)&this->_name;
    *pointer = name;
    std::cout << "Bureaucrat " << this->_name << " created" << std::endl;
    this->_grade = 0;
}

void Bureaucrat::set_grade(int grade)
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
    this->set_grade(150);
}

void Bureaucrat::GradeTooHighException()
{
    std::cout << "Grade too high" << std::endl;
    this->set_grade(1);
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
    this->set_grade(this->_grade);
}

void    Bureaucrat::decrementGrade()
{
    std::cout << "Decrement grade called" << std::endl;
    this->_grade++;
    this->set_grade(this->_grade);
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    this->_grade = rhs._grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
}

void        Bureaucrat::set_sign(bool p)
{
    this->_sign = p;
}

bool  Bureaucrat::signForm(Form const &rhs)
{
    if (rhs.getSign() == true)
    {
        std::cout << this->_name << "signs form" << std::endl;
    }
    else
    {
        std::cout << this->_name << "fails to sign form" << std::endl;
    }
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