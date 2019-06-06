#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde()
{

}

ZombieHorde::ZombieHorde(int N)
{
    _ncheck = 0;
    Zombie *zombies = new Zombie[N];
    zombiesaddress = &zombies;

    std::string name;
    char names[9][20] = {"Stupid", "Scary", "Never", "Before", "Seen", "Unlike", "The", "Movies", "Unknown"};

    while (_ncheck < N)
    {
        srand (time(0) + _ncheck);
        
        int randomindex = std::rand() % 9;
        name = names[randomindex];
        zombies[_ncheck].name = name;
        _ncheck++;
    }
    this->announce(zombies, N);
}

void    ZombieHorde::announce(Zombie *zombies, int N)
{
    _ncheck = 0;

    while (_ncheck < N)
    {
        std::cout << zombies[_ncheck].name << std::endl;;
        _ncheck++;
    }
}

ZombieHorde::~ZombieHorde()
{
    delete [] *zombiesaddress;
}