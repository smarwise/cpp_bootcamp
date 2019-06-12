#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <string>
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string const _name;
        int               _grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat &operator=(Bureaucrat const &rhs);
        Bureaucrat(Bureaucrat const &src);
        ~Bureaucrat();
        class GradeTooLowException : public std::exception
        {
            public:
            virtual const char* what() const throw()
            {
                return "Grade is Too Low";
            };
        };
        class GradeTooHighException : public std::exception
        {
            public:
            virtual const char* what() const throw()
            {
                return "Grade is Too High";
            };
        };
        class FormAlreadySignedException : public std::exception
        {
            public:
            virtual const char* what() const throw()
            {
                return "Form is Already Signed";
            };
        };
        void        set_grade(int grade);
        std::string getName() const;
        int         getGrade() const;
        void        incrementGrade();
        void        decrementGrade();
        void        signForm(Form &form);
};

std::ostream &operator<<(std::ostream &o,  Bureaucrat const &rhs); 

#endif