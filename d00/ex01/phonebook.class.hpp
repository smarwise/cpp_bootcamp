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

#endif