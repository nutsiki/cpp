//
// Created by Nutsiki on 05/02/2022.
//

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"


class FragTrap : public virtual ClapTrap {
public:
    FragTrap(void);
    FragTrap(std::string name);
    ~FragTrap(void);
    FragTrap(FragTrap const &src);
    FragTrap &operator=(const FragTrap &new_cp);
    void highFivesGuys(void);
};


#endif //FRAGTRAP_HPP