#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "./Color.hpp"

class WrongAnimal
{
    protected:
        std::string _type;

    public:
        WrongAnimal(void);
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &data);
        virtual ~WrongAnimal(void);

		WrongAnimal &operator=(const WrongAnimal &data);

        std::string getType(void) const;
        void        makeSound(void) const;
};

#endif