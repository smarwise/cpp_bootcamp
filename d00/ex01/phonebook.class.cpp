#include "phonebook.class.hpp"
#include <iostream>

Phonebook::Phonebook(void){

    std::cout << "Constructor called" << std::endl;
    return ;
}

Phonebook::~Phonebook(void){

    std::cout << "Destructor called" << std::endl;
    return ;
}

char* Phonebook::request_input(void)
{
    char    buff[512];
    char    *command;;

    command = ((char *)"None");
    std::cout << "Allowed commands are EXIT, SEARCH and ADD. " << std::endl;
    std::cout << "Input a command: ";
    std::cin >> buff;
    if (strcmp(buff, ((char *)"EXIT")) == 0)
        command = ((char *)"EXIT");
    if (strcmp(buff, ((char *)"SEARCH")) == 0)
        command = ((char *)"SEARCH");
    if (strcmp(buff, ((char *)"ADD")) == 0)
        command = ((char *)"ADD");
    return (command);
}

void    Phonebook::add_contact(void)
{
    Contact     NEW;
    
    std::cout << "Adding contact called" << std::endl;
    std::cout << "First name : ";
    std::cin >> first_name;
    std::cout << "Last name : ";
    std::cin >> last_name;
    std::cout << "Nickname : ";
    std::cin >> nickname;
    std::cout << "Login : ";
    std::cin >> login;
    std::cout << "Postal address : ";
    std::cin >> postal_address;
    std::cout << "Email address : ";
    std::cin >> email_address;
    std::cout << "Phone number : ";
    std::cin >> phone_number;
    std::cout << "Birthday date : ";
    std::cin >> birthday_date;
    std::cout << "Favorite meal : ";
    std::cin >> favorite_meal;
    std::cout << "Underwear color : ";
    std::cin >> underwear_color;
    std::cout << "Darkest secret : ";
    std::cin >> darkest_secret;
    return ;
}

void    Phonebook::search_contact(void)
{
    std::cout << "Search contact called" << std::endl;
    return ;
}