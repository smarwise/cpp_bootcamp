#include "phonebook.class.hpp"
#include <iostream>


Phonebook::Phonebook(void)
{
    return ;
}

Phonebook::~Phonebook(void)
{
    return ;
}

std::string Phonebook::request_input(void)
{
    std::string    buff;
    std::string    command;;

    command = "None";
    std::cout << "Allowed commands are EXIT, SEARCH and ADD. " << std::endl;
    std::cout << "Input a command: ";
    std::cin >> buff;
    if (buff == "EXIT")
        command = "EXIT";
    if (buff == "SEARCH")
        command = "SEARCH";
    if (buff == "ADD")
        command = "ADD";
    return (command);
}

Contact    Phonebook::add_contact(void)
{
    Contact     new_contact;

    std::cout << "Adding contact called" << std::endl;
    std::cout << "First name : ";
    std::cin >> new_contact.first_name;
    std::cout << "Last name : ";
    std::cin >> new_contact.last_name;
    std::cout << "Nickname : ";
    std::cin >> new_contact.nickname;
    std::cout << "Login : ";
    std::cin >> new_contact.login;
    std::cout << "Postal address : ";
    std::cin >> new_contact.postal_address;
    std::cout << "Email address : ";
    std::cin >> new_contact.email_address;
    std::cout << "Phone number : ";
    std::cin >> new_contact.phone_number;
    std::cout << "Birthday date : ";
    std::cin >> new_contact.birthday_date;
    std::cout << "Favorite meal : ";
    std::cin >> new_contact.favorite_meal;
    std::cout << "Underwear color : ";
    std::cin >> new_contact.underwear_color;
    std::cout << "Darkest secret : ";
    std::cin >> new_contact.darkest_secret;
    return (new_contact);
}

void            Phonebook::search_contact(Contact *contacts, int i)
{
    int         n = 0;
    std::string str;
    int         index;
    int         len;
    std::string extra = "          ";

    while (n < i)
    {
        std::cout << n << " | ";
        std::string first_name = contacts[n].first_name;
        std::string last_name = contacts[n].last_name;
        std::string nickname = contacts[n].nickname;
        if (first_name.length() < 10)
        {
            len = 10 - first_name.length();
            first_name = first_name + extra.substr(0, len);
            std::cout << first_name << " | ";
        }
        else
        {
            str = first_name.erase(9, first_name.length());
            str = str + ".";
            std::cout << str << " | ";
        }
        if (last_name.length() < 10)
        {
            len = 10 - last_name.length();
            last_name = last_name + extra.substr(0, len);
            std::cout << last_name  << " | ";
        }
        else
        {
            str = last_name.erase(9, last_name.length());
            str = str + ".";
            std::cout << str << " | ";
        }
        if (nickname.length() < 10)
        {
            len = 10 - nickname.length();
            nickname = nickname + extra.substr(0, len);
            std::cout << nickname << " | ";
        }
        else
        {
            str = nickname.erase(9, nickname.length());
            str = str + ".";
            std::cout << str << " | ";
        }
        std::cout << std::endl;
        n++;
    }
    std::cout << "Input an index: ";
    while(!(std::cin >> index))
    {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Not a valid integer. Please try again: ";
    }
    if ((index >= 0 and index < 8) and (index < i))
    {
        std::cout << "Index          : " << index << std::endl;
        std::cout << "First Name     : " << contacts[index].first_name << std::endl;
        std::cout << "Last Name      : " << contacts[index].last_name << std::endl;
        std::cout << "Nick Name      : " << contacts[index].nickname << std::endl;
        std::cout << "Login          : " << contacts[index].login << std::endl;
        std::cout << "Postal address : " << contacts[index].postal_address << std::endl;
        std::cout << "Email Address  : " << contacts[index].email_address << std::endl;
        std::cout << "Phone Number   : " << contacts[index].phone_number << std::endl;
        std::cout << "Birthday date  : " << contacts[index].birthday_date << std::endl;
        std::cout << "Favorite Meal  : " << contacts[index].favorite_meal << std::endl;
        std::cout << "Underwear Color: " << contacts[index].underwear_color << std::endl;
        std::cout << "Darkest Secret : " << contacts[index].darkest_secret << std::endl;
    }
    else
        std::cout << "Not a valid index. Please try another one." << std::endl;
    return ;
}