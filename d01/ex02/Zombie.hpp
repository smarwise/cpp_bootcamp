#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
    public:
        std::string type;
        std::string name;

        Zombie();
        ~Zombie();
        void    announce();    
};

#endif