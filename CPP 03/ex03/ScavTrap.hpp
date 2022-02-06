//
// Created by Nutsiki on 05/02/2022.
//

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"


class ScavTrap : public virtual ClapTrap {
public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ~ScavTrap(void);
    ScavTrap(ScavTrap const &src);
    ScavTrap &operator=(const ScavTrap &new_cp);
	void attack(std::string const &target);
	void guardGate(void);
};


#endif //SCAVTRAP_HPP