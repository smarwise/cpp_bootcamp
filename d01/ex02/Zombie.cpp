#include "Zombie.hpp"


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