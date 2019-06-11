#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <string>
#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
    private:
        std::string const _name;
        int               _grade;
        bool              _sign;

    public:
        Bureaucrat();
        Bureaucrat(std::string name);
        Bureaucrat &operator=(Bureaucrat const &rhs);
        ~Bureaucrat();
        void        set_grade(int grade);
        void        set_sign(bool p);
        void        GradeTooLowException();
        void        GradeTooHighException();
        std::string getName() const;
        int         getGrade() const;
        void        incrementGrade();
        void        decrementGrade();
        bool        signForm(Form const &rhs);
};

std::ostream &operator<<(std::ostream &o,  Bureaucrat const &rhs); 

#endif