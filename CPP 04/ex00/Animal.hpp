//
// Created by Nutsiki on 06/02/2022.
//

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>


class Animal {
public:
    Animal(void);
    virtual ~Animal(void);
    Animal(Animal const &src);
    Animal &operator=(const Animal &new_cp);
    virtual void makeSound(void) const;
    std::string getType(void) const;
    void setType(std::string type);

protected:
    std::string m_type;

};


#endif //ANIMAL_HPP
