#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent()
{

}

ZombieEvent::~ZombieEvent()
{

}

void ZombieEvent::setZombieType()
{
    zombietype = "Weird Zombie";
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie *neww = new Zombie();
    
    name = name;
    type = ZombieEvent::zombietype;
    return (&neww);
} 

