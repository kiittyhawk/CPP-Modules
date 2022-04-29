#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "./WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(const WrongCat &data);
        ~WrongCat(void);

        WrongCat    &operator=(const WrongCat &data);

        std::string getType(void) const;
        void        makeSound(void) const;
};

#endif