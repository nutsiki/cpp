//
// Created by Nutsiki on 17/02/2022.
//

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"


class MateriaSource : public IMateriaSource
{
private:
	AMateria    *m_materia[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &copy);
	virtual ~MateriaSource();
	MateriaSource &operator=(const MateriaSource &new_cp);
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};


#endif //MATERIASOURCE_HPP
