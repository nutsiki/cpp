//
// Created by Nutsiki on 06/02/2022.
//

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	virtual ~Dog(void);
	Dog(Dog const &src);
	Dog &operator=(const Dog &new_cp);
	virtual void makeSound(void) const;
};


#endif //DOG_HPP
