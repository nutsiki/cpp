//
// Created by Nutsiki on 06/02/2022.
//

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *m_brain;
public:
	Dog(void);
	virtual ~Dog(void);
	Dog(Dog const &src);
	Dog &operator=(const Dog &new_cp);
	virtual void makeSound(void) const;
	std::string getIdea(int i) const;
};


#endif //DOG_HPP
