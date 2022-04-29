#ifndef DOG_HPP
#define DOG_HPP

#include "./Animal.hpp"

class Dog : public Animal
{
    private:
        Brain   *_brain;

    public:
        Dog(void);
        Dog(const Dog &data);
        ~Dog(void);

        Dog &operator=(Dog const &data);
        
        void        makeSound(void) const;
        std::string getType(void) const;
        Brain   *getBrain(void) const;
        void    printIdeas(void) const;
};

#endif