#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "./Brain.hpp"

#define NUMBER_OF_ANIMALS 4

class AAnimal
{
    protected:
        std::string _type;

    public:
        AAnimal(void);
        AAnimal(const AAnimal &data);
        virtual ~AAnimal(void) = 0;

        virtual AAnimal  &operator=(AAnimal const &data);

		std::string		getType(void) const;
        virtual void    makeSound(void) const = 0;
		virtual Brain	*getBrain(void) const = 0;
        virtual void	printIdeas(void) const = 0;
};

#endif