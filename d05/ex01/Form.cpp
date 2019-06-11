#include "Form.hpp"
#include "Form.hpp"

Form::Form() : gradeSign_(75)
{

}

Form::~Form()
{

}

void Form::GradeTooLowException()
{
    std::cout << "Grade too low" << std::endl;
}

void Form::GradeTooHighException()
{
    std::cout << "Grade too high" << std::endl;
}

std::string Form::getName() const
{
    return (this->name_);
}

int         Form::getGradeSign() const
{
    return (this->gradeSign_);
}

int         Form::getGradeExecute() const
{
    return (this->gradeExecute_);
}

void        Form::setGradeSign()
{
}

void        Form::setGradeExecutable()
{

}

Form &Form::operator=(Form const &rhs)
{
    this->name_ = rhs.name_;
    return *this;
}

void        Form::setName(std::string name)
{
    this->name_ = name;
}

bool        Form::beSigned(Bureaucrat const &rhs)
{
    if (rhs.getGrade >= 1 and rhs.getGrade < gradeSign_)
    {
        this->sign_ = true;
        return (true);
    }
    else if (rhs.getGrade > 150)
    {
        GradeTooLowException();
        return (false);
    }
    else
        return (false);
    
}

bool Form::getSign() const
{
    return this->sign_;
}

std::ostream &operator<<(std::ostream &o,  Form const &rhs)
{
    o << "Form for ";
    o << rhs.getName();
    o << "is ";
    // o << rhs.
    // o << rhs.getGrade();
    o << std::endl;
    return (o);
}