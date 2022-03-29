//
// Created by Nutsiki on 29/03/2022.
//

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


class MutantStack
{
public:
	MutantStack();
	MutantStack(unsigned int N);
	~MutantStack();
	MutantStack(MutantStack const &src);
	MutantStack &operator=(const MutantStack &new_cp);
};


#endif //MUTANTSTACK_HPP
