#include "ScavTrap.hpp"

int main()
{
    ClapTrap c("oussama");
    c.attack("Enemy");
    c.takeDamage(5);
    c.beRepaired(3);

    std::cout << "----------------------" << std::endl;

    ScavTrap s("oussmac");
    s.attack("Enemy");
    s.takeDamage(20);
    s.beRepaired(10);
    s.guardGate();

    return 0;
}
