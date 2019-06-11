#include "Bureaucrat.hpp"

class  Form
{
    private:
        std::string name_;
        bool sign_;
        int const gradeSign_;
        int const gradeExecute_;
    public:
        Form();
        ~ Form();
        Form        &operator=(Form const &rhs);
        void        GradeTooLowException();
        void        GradeTooHighException();
        
        std::string getName() const;
        int         getGradeSign() const;
        int         getGradeExecute() const;
        bool        getSign() const;
        void        setGradeSign();
        void        setGradeExecutable();
        void        setName(std::string name);
        bool        beSigned(Bureaucrat &);

};

std::ostream &operator<<(std::ostream &o,  Form const &rhs); 