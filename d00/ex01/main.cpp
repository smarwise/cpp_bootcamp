#include <iostream> 
#include "phonebook.class.hpp"
#include <string>

int              main(void)
{
    Phonebook    book;
    char         command[512];

    while (Phonebook::exit == 0)
    {
        strcpy(command, "");
        strcpy(command, book.request_input());
        if (strcmp(command, ((char *)"EXIT")) == 0)
            break;
        if (strcmp(command, ((char *)"ADD")) == 0)
            book.add_contact();
        if (strcmp(command, ((char *)"SEARCH")) == 0)
            book.search_contact();
    }
    return 0;
}
