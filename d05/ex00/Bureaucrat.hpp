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
        Bureaucrat &operator=(Bureaucrat const &rhs);
        ~Bureaucrat();
        void        set_grade(int grade);
        void        GradeTooLowException();
        void        GradeTooHighException();
        std::string getName() const;
        int         getGrade() const;
        void        incrementGrade();
        void        decrementGrade();
};

std::ostream &operator<<(std::ostream &o,  Bureaucrat const &rhs); 

#endif