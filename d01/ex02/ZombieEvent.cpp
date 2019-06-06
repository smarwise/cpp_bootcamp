#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent()
{

}

ZombieEvent::~ZombieEvent()
{
}

void ZombieEvent::setZombieType(std::string type, Zombie *zombie)
{
    zombie->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie *neww = new Zombie();
    
    neww->name = name;
    neww->type = zombietype;
    return (neww);
}

void ZombieEvent::randomChump()
{
    std::string name;

    srand (time(NULL));
    char names[4][20] = {"Stupid Scary", "Never before seen", "Unlike the movies", "Unknown"};
    int randomindex = std::rand() % 4;
    name = names[randomindex];
    Zombie      *zombie = this->newZombie(name);
    this->setZombieType("random", zombie);
    zombie->announce();
    delete zombie;
}

