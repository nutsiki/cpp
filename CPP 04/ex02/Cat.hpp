//
// Created by Nutsiki on 06/02/2022.
//

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *m_brain;
public:
	Cat(void);
	virtual ~Cat(void);
	Cat(Cat const &src);
	Cat &operator=(const Cat &new_cp);
	virtual void makeSound(void) const;
	std::string getIdea(int i) const;
};


#endif //CAT_HPP
