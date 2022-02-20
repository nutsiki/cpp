//
// Created by Nutsiki on 16/02/2022.
//

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"


class Character : public ICharacter
{
private:
	std::string	m_name;
	AMateria	*m_materia[4];
public:
	virtual ~Character();
	Character();
	Character(std::string name);
	Character &operator=(const Character &new_cp);
	Character(Character const &src);
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};


#endif //CHARACTER_HPP
