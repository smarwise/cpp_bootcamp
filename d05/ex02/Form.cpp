#include "Form.hpp"

Form::Form(): gradeSign_(76), gradeExecute_(0)
{

}

Form::Form(std::string name, int tosign, int toexec): name_(name), sign_(false), gradeSign_(tosign),  gradeExecute_(toexec)
{
}

Form::Form(Form const &src): gradeSign_(76), gradeExecute_(0)
{
    *this = src;
    return;
}

Form::~Form()
{

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

Form &Form::operator=(Form const &rhs)
{
    this->sign_ = rhs.getSign();
    return *this;
}

void        Form::beSigned(Bureaucrat &bureau)
{
    if (this->sign_ == false)
    {
        if (bureau.getGrade() < gradeSign_)
        {
            this->sign_ = true;
        }
        else
        {
            throw Bureaucrat::GradeTooLowException();
        }
    }
    else
        throw Bureaucrat::FormAlreadySignedException();
}

bool Form::getSign() const
{
    return this->sign_;
}

std::ostream &operator<<(std::ostream &o,  Form const &rhs)
{
    o << "Form ";
    o << rhs.getName();
    o << " is ";
    if (rhs.getSign() == false)
    {
        o << "currently unsigned and requires a grade greater than ";
        o << rhs.getGradeSign();
        o << " to be signed.";
    }
    else
    {
        o << "currently signed and cannot be signed again.";
    }
    o << std::endl;
    return (o);
}