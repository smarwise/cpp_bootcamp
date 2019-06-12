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
        Bureaucrat(std::string name, int grade);
        Bureaucrat &operator=(Bureaucrat const &rhs);
        Bureaucrat(Bureaucrat const &src);
        ~Bureaucrat();
        class GradeTooLowException : public std::exception
        {
            public:
            virtual const char* what() const throw()
            {
                return "Grade Too Low";
            };
        };
        class GradeTooHighException : public std::exception
        {
            public:
            virtual const char* what() const throw()
            {
                return "Grade Too High";
            };
        };
        void        set_grade(int grade);
        std::string getName() const;
        int         getGrade() const;
        void        incrementGrade();
        void        decrementGrade();
};

std::ostream &operator<<(std::ostream &o,  Bureaucrat const &rhs); 

#endif