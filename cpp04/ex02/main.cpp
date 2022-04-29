#include "./includes/Dog.hpp"
#include "./includes/Cat.hpp"

int	main( void )
{
	Dog		*dogs[NUMBER_OF_ANIMALS];
	Cat		*cats[NUMBER_OF_ANIMALS];
	Brain	*brain;

	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		dogs[i] = new Dog();
		std::cout << i << ": " << dogs[i]->getType() << std::endl;
		dogs[i]->printIdeas();
	}
	std::cout << std::endl;

	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		cats[i] = new Cat();
		std::cout << i << ": " << cats[i]->getType() << std::endl;
		cats[i]->printIdeas();
	}
	std::cout << "A cat with an index 1" << std::endl;
	std::cout << "Add more brains " << std::endl;
	brain = cats[1]->getBrain();
	brain->addIdea("Losing toys");
	brain->addIdea("I'm hungry");
	brain->addIdea("Pee in sneakers");
	brain->addIdea("Love nature");
	brain->addIdea("Love nature", -4);
	cats[1]->printIdeas();
	std::cout << std::endl;

	std::cout << "A dog with an index 2 " << std::endl;
	std::cout << "It's a " << dogs[2]->getType() << std::endl;
	std::cout << "Add more brains " << std::endl;
	dogs[2]->getBrain()->addIdea("Do nothing");
	dogs[2]->getBrain()->addIdea("Shout", 1);
	dogs[2]->printIdeas();
	std::cout << std::endl;

	*dogs[1] = *dogs[2];
	dogs[1]->printIdeas();

	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		delete dogs[i];
		delete cats[i];
	}
    return (0);
}
