#ifndef ZOMBIEEVENT_H
#define ZOMBIEEVENT_H

#include "Zombie.hpp"

class ZombieEvent
{

    private:
        std::string         _name;
        std::string zombietype;

    public:
        ZombieEvent();
        ~ZombieEvent();

        void        setZombieType(std::string type, Zombie *);
        Zombie*     newZombie(std::string name);
        void        randomChump();

};

#endif