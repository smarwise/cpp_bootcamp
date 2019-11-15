#ifndef FORM_H
#define FORM_H
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class  Form
{
    private:
        std::string const name_;
        bool sign_;
        int const gradeSign_;
        int const gradeExecute_;

    public:
        Form();
        Form(std::string name, int tosign, int toexec);
        Form(Form const &src);
        ~Form();
        class GradeSignTooHighException : public std::exception
        {
            public:
            const char* what() const throw();
        };
        class GradeSignTooLowException : public std::exception
        {
            public:
            virtual const char* what() const throw();
        };
        class GradeToExecuteTooHigh : public std::exception
        {
            public:
            virtual const char* what() const throw();
        };
        class GradeToExecuteTooLow: public std::exception
        {
            public:
            virtual const char* what() const throw();
        };
        Form        &operator=(Form const &rhs);
        void        GradeTooLowException();
        void        GradeTooHighException();
        std::string getName() const;
        int         getGradeSign() const;
        int         getGradeExecute() const;
        bool        getSign() const;
        void        beSigned(Bureaucrat &bureau);
};

std::ostream &operator<<(std::ostream &o,  Form const &rhs); 

#endif