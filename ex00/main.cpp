#include "ClapTrap.hpp"

int main()
{
    ClapTrap c("oussama");
    c.attack("Enemy");
    c.takeDamage(5);
    c.beRepaired(3);

    return 0;
}
