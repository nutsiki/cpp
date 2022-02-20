//
// Created by Nutsiki on 17/02/2022.
//

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"


class Cure : public AMateria
{
public:
	Cure(void);
	~Cure(void);
	Cure &operator=(const Cure &new_cp);
	Cure(Cure const &src);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};


#endif //CURE_HPP
