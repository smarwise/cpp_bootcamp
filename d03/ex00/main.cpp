#include "FragTrap.hpp"

int     main(void)
{
    FragTrap o = FragTrap("TestCases");
    FragTrap po = FragTrap();

    std::cout << o << std::endl;
    o.takeDamage(90);
    o.rangedAttack("someone");
    o.meleeAttack("someone");
    o.vaulthunter_dot_exe("me");
    o.vaulthunter_dot_exe("another me");
    o.vaulthunter_dot_exe("the real real me");
    o.vaulthunter_dot_exe("the real real me");
    o.vaulthunter_dot_exe("the real real me");
    std::cout << o << std::endl;
    o.beRepaired(25);
    std::cout << o << std::endl;
}