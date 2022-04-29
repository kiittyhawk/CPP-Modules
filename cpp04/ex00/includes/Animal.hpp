#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "./Color.hpp"

class Animal
{
    protected:
        std::string _type;

    public:
        Animal(void);
        Animal(const Animal &data);
        Animal(std::string type);
        virtual ~Animal(void);

        Animal  &operator=(Animal const &data);

		std::string		getType(void) const;
        virtual void    makeSound(void) const;
};

#endif