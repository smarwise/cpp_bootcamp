#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <string>
#include <iostream>

class Bureaucrat
{
    private:
        std::string const _name;
        int               _grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string name);
        Bureaucrat(int grade);
        void GradeTooLowException();
        void GradeTooHighException();
        std::string getName() const;
        int         getGrade() const;
        void        incrementGrade();
        void        decrementGrade();
        Bureaucrat &operator=(Bureaucrat const &rhs);
        ~Bureaucrat();
};

std::ostream &operator<<(std::ostream &o,  Bureaucrat const &rhs); 

#endif