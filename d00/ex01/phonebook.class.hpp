#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H
#include <string>



class Contact{
    public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string login;
        std::string postal_address;
        std::string email_address;
        std::string phone_number;
        std::string birthday_date;
        std::string favorite_meal;
        std::string underwear_color;
        std::string darkest_secret;
};

class Phonebook{
    public:

        Phonebook (void);
        ~Phonebook (void);
        char    *get_command(char *str);
        std::string request_input(void);
        Contact    add_contact(void);
        void    search_contact(Contact *contacts, int i);
        static int const exit = 0;
    
    private:
        static int _nbContacts;
};

#endif