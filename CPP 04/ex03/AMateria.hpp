//
// Created by Nutsiki on 06/02/2022.
//

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

//class ICharacter;

class AMateria
{
protected:
	std::string	m_type;
public:
	AMateria(std::string const & type);
	AMateria(void);
	virtual ~AMateria(void);
	AMateria &operator=(const AMateria &new_cp);
	AMateria(AMateria const &src);
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //AMATERIA_HPP
