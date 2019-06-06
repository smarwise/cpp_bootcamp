#ifndef ZOMBIEEVENT_H
#define ZOMBIEEVENT_H

#include "Zombie.hpp"

class ZombieEvent
{
    public:
        std::string     name;

        ZombieEvent();
        ~ZombieEvent();

        void setZombieType();
        Zombie* newZombie(std::string name);
        static std::string zombietype;

};

#endif