//
// Created by Nutsiki on 06/02/2022.
//

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
public:
	WrongAnimal(void);
	virtual ~WrongAnimal(void);
	WrongAnimal(WrongAnimal const &src);
	WrongAnimal &operator=(const WrongAnimal &new_cp);
	void makeSound(void) const;
	std::string getType(void) const;
	void setType(std::string type);

protected:
	std::string m_type;

};

#endif //WRONGANIMAL_HPP
