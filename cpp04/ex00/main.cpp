#include "./includes/Cat.hpp"
#include "./includes/Dog.hpp"
#include "./includes/WrongCat.hpp"

int main(void)
{
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << animal->getType() << " " << std::endl;
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;

    animal->makeSound();
    cat->makeSound();
    dog->makeSound();

    delete cat;
    delete dog;
    delete animal;

    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongAnimal->getType() << " " << std::endl;
    std::cout << wrongCat->getType() << " " << std::endl;

    wrongAnimal->makeSound();
    wrongCat->makeSound();

    delete wrongCat;
    delete wrongAnimal;

    return 0;
}