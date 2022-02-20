//
// Created by Nutsiki on 17/02/2022.
//

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	~Ice(void);
	Ice &operator=(const Ice &new_cp);
	Ice(Ice const &src);
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};


#endif //ICE_HPP
