#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent()
{

}

ZombieEvent::~ZombieEvent()
{

}

void ZombieEvent::setZombieType(std::string type)
{
    zombietype = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie *neww = new Zombie();
    
    name = name;
    type = ZombieEvent::zombietype;
    return (&neww);
}

std::string ZombieEvent::randomChump()
{
    std::string name;
    ZombieEvent zoom;
    Zombie      announce;

    
    char names[4][20] = {"Stupid Scary", "Never before seen", "Unlike the movies", "Unknown"};
    int randomindex = rand() % 4;
    name = names[randomindex];
    zoom.newZombie(name);
    announce.announce();
    return (name);
}

