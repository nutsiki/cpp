//
// Created by Nutsiki on 05/02/2022.
//

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
    protected:
        std::string     m_name;
        unsigned int    m_hit_points;
        unsigned int    m_energy_points;
        unsigned int    m_attack_damage;
    public:
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &src);
        ~ClapTrap(void);
        ClapTrap(void);
        std::string getName(void) const;
        void setName(std::string const name);
        unsigned int getHit(void) const;
        void setHit(unsigned int const hit);
        unsigned int getEnergy(void) const;
        void setEnergy(unsigned int const energy);
        unsigned int getAttack(void) const;
        void setAttack(unsigned int const attack);
        ClapTrap &operator=(const ClapTrap &new_cp);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif //CLAPTRAP_HPP
