//
// Created by Nutsiki on 06/02/2022.
//

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
private:
	std::string	m_ideas[100];
public:
	Brain(void);
	virtual ~Brain(void);
	Brain(Brain const &src);
	Brain &operator=(const Brain &new_cp);
	std::string	getIdeas(int i) const;
	void	setIdeas(std::string const idea, int i);
};


#endif //BRAIN_HPP
