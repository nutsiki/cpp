//
// Created by Nutsiki on 06/02/2022.
//

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	~WrongCat(void);
	WrongCat(WrongCat const &src);
	WrongCat &operator=(const WrongCat &new_cp);
	void makeSound(void) const;
};


#endif //WRONGCAT_HPP
