#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

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