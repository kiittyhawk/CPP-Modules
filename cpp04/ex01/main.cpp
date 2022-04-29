#include "./includes/Dog.hpp"
#include "./includes/Cat.hpp"
#include "./includes/Brain.hpp"

int	main( void )
{
	Animal	*animals[NUMBER_OF_ANIMALS];
	Brain	*brain;

	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		if (i < NUMBER_OF_ANIMALS / 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
		std::cout << i << ": " << animals[i]->getType() << std::endl;
		animals[i]->printIdeas();
	}
	std::cout << std::endl;

	std::cout << "An animal with an index 4 " << std::endl;
	std::cout << "It's a " << animals[4]->getType() << std::endl;
	std::cout << "Add more brains " << std::endl;
	brain = animals[6]->getBrain();
	brain->addIdea("Losing toys");
	brain->addIdea("I'm hungry");
	brain->addIdea("Pee in sneakers");
	brain->addIdea("Love nature");
	brain->addIdea("Love nature", -4);
	animals[6]->printIdeas();
	std::cout << std::endl;

	std::cout << "An animal with an index 2 " << std::endl;
	std::cout << "It's a " << animals[2]->getType() << std::endl;
	std::cout << "Add more brains " << std::endl;
	animals[2]->getBrain()->addIdea("Do nothing");
	animals[2]->getBrain()->addIdea("Shout", 1);
	animals[2]->printIdeas();
	std::cout << std::endl;

	*animals[5] = *animals[6];
	animals[5]->printIdeas();

	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
		delete animals[i];
    return (0);
}
