#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H

class Phonebook{
    public:

        Phonebook (void);
        ~Phonebook (void);
        char    *get_command(char *str);
        char    *request_input(void);
        void    add_contact(void);
        void    search_contact(void);
        static int const exit = 0;
};

class Contact{
    public:
        char first_name[512];
        char last_name[512];
        char nickname[512];
        char login[512];
        char postal_address[512];
        char email_address[512];
        char phone_number[512];
        char birthday_date[512];
        char favorite_meal[512];
        char underwear_color[512];
        char darkest_secret[512];
};

#endif