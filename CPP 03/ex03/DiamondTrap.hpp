#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap {
private:
    std::string m_name;
public:
    DiamondTrap(void);
    DiamondTrap(std::string name);
    ~DiamondTrap(void);
    DiamondTrap(DiamondTrap const &src);
    DiamondTrap &operator=(const DiamondTrap &new_cp);
    void attack(const std::string &target);
    void highFivesGuys(void);
    void guardGate(void);
    void    whoAmI(void);
};


#endif //DIAMONDTRAP_HPP