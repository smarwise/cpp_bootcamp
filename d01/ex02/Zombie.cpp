#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{

}

void    Zombie::announce()
{
    std::cout << "<" << name << "  (" <<  type << ")" << " > " << "Braiiiiiiinnnssss..." << std::endl;
}


Zombie::~Zombie()
{
}