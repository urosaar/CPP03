#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("oussama");

    a.attack("Enemy");
    a.takeDamage(5);
    a.beRepaired(3);
    a.takeDamage(20);
    a.attack("Enemy");

    return 0;
}
