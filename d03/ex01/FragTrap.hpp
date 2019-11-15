#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include <iostream>
#include <string>

class FragTrap
{
    protected:
        int         _hitpoints;
        int         _maxhitpoints;
        int         _energypoints;
        int         _maxenergypoints;
        int         _level;
        std::string _name;
        int         _meleeattackdamage;
        int         _rangedattackdamage;
        int         _armordamagereduction;

    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const &src);
        ~FragTrap(void);
        FragTrap &operator=(FragTrap const &rhs);
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        int  get_energy() const;
        int  get_hitpoints() const;    
};

// std::ostream &operator<<(std::ostream &o,  FragTrap const &rhs); 
#endif