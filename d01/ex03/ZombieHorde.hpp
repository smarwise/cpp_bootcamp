#include "Zombie.hpp"

class ZombieHorde
{
    public:
        ZombieHorde();
        ZombieHorde(int N);
        ~ZombieHorde();

        void    announce(Zombie *zombies, int N);

    private:
        int     _ncheck;
        Zombie **zombiesaddress;

};