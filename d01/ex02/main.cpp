#include "ZombieEvent.hpp"


int             main(void)
{
    ZombieEvent zoom;
    Zombie      *one = zoom.newZombie("wow");
    
    zoom.setZombieType("cool zombie", one);
    one->announce();
    zoom.randomChump();
    delete one;
}