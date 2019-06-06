#include "ZombieEvent.hpp"
// #include "Zombie.hpp"

std::string randomChump()
{
    std::string name;
    ZombieEvent zoom;
    Zombie      announce;

    zoom.newZombie(randomChump());
    char names[4][20] = {"Stupid Scary", "Never before seen", "Unlike the movies", "Unknown"};
    int randomindex = rand() % 4;
    name = names[randomindex];
    announce.announce();
    return (name);
}

int     main(void)
{
    randomChump();
}