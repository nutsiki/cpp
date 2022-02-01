#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>


class Zombie {
    public:
        Zombie(void);
        ~Zombie(void);
        void    setName(std::string name);
        void    announce(void);
private:
    std::string     	m_name;
};

Zombie* 				newZombie(std::string name);
void 					randomChump(std::string name);

#endif