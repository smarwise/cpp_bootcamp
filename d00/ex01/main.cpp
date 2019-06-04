#include <iostream> 
#include "phonebook.class.hpp"
#include <string>

int                     main(void)
{
    Phonebook           book;
    std::string         command;
    static int          i;
    static  Contact contacts[8];
    Contact             new_contact;

    i = 0;
    while (Phonebook::exit == 0)
    {
        command = "";
        command = book.request_input();
        if (command == "EXIT")
            break;
        if (command == "ADD")
           {
                new_contact = book.add_contact();
                contacts[i] = new_contact;
                i++;
           }
        if (command == "SEARCH")
            book.search_contact(contacts, i);
    }
    return 0;
}
