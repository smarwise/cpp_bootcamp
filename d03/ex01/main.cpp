#include "FragTrap.hpp"

int     main(void)
{
    FragTrap o = FragTrap("TestCases");
    FragTrap po = FragTrap();

    o.takeDamage(90);
    o.rangedAttack("someone");
}