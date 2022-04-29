#ifndef CAT_HPP
#define CAT_HPP

#include "./Animal.hpp"

class Cat : public Animal
{
    private:
        Brain   *_brain;

    public:
        Cat(void);
        Cat(const Cat &data);
        ~Cat(void);

        Cat &operator=(const Cat &data);

        std::string getType(void) const;
        void        makeSound(void) const;
        Brain       *getBrain(void) const;
        void        printIdeas(void) const;
};

#endif