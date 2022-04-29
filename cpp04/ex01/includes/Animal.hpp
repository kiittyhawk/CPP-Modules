#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "./Brain.hpp"

#define NUMBER_OF_ANIMALS 8

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
		virtual Brain	*getBrain(void) const = 0;
        virtual void	printIdeas(void) const = 0;
};

#endif