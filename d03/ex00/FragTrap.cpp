#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "Default Constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = src;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "Constructor called" << std::endl;

    _hitpoints = 100;
    _maxhitpoints = 100;
    _energypoints = 100;
    _maxenergypoints = 100;
    _level = 1;
    _name = name;
    _meleeattackdamage = 100;
    _rangedattackdamage = 20;
    _armordamagereduction = 5;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
    std::cout << "Assignment Operator called" << std::endl;
    this->_energypoints  = rhs._energypoints;
    this->_hitpoints = rhs._hitpoints;
    return *this;
}

void FragTrap::rangedAttack(std::string const & target)
{
    std::cout  << "FR4G-TP " << this->_name << "attacks " << target << " at range, causing " << _rangedattackdamage << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
    std::cout  << "FR4G-TP " << this->_name << " attacks " << target << " with a melee, causing " << _meleeattackdamage << " points of damage!" << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount)
{
    std::cout  << "FR4G-TP " << this->_name << " is hit and loses " << (amount - this->_armordamagereduction) << " hit points." << std::endl;
    this->_hitpoints -= (amount - this->_armordamagereduction);
    if (this->_hitpoints <= 0)
        this->_hitpoints = 0;
}

void    FragTrap::beRepaired(unsigned int amount)
{
    std::cout  << "FR4G-TP " << this->_name << " is repaired and gains " << amount << " hit points." << std::endl;
    this->_hitpoints += amount;
    if (this->_hitpoints >= _maxhitpoints)
        this->_hitpoints = _maxhitpoints;
}

FragTrap::~FragTrap(void)
{
    std::cout << "Destructor called" << std::endl;
}

int     FragTrap::get_energy() const
{
    return (this->_energypoints);
}
int     FragTrap::get_hitpoints() const
{
    return (this->_hitpoints);
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    std::string attack;

    if (this->_energypoints >= 25)
    {
        srand (time(NULL) + _energypoints);
        char names[4][30] = {"Stupid Scary Attack", "Never before seen Attack", "Better than the movies Attack", "Unknown Attack"};
        int randomindex = std::rand() % 4;
        attack = names[randomindex];
        this->_energypoints -= 25;
        if (this->_energypoints <= 0)
            this->_energypoints = 0;
        std::cout << "vaulthunter_dot_exe is called and it does a " << attack << " on " << target << std::endl;
    }
    else
        std::cout << "You dont have enough energy to stage this attack" << std::endl;
}

std::ostream &operator<<(std::ostream &o,  FragTrap const &rhs)
{
    o << "Energy: " << rhs.get_energy();
    o << std::endl;
    o << "Hit Points: " << rhs.get_hitpoints();
    return o;
}