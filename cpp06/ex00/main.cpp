#include "../includes/Convert.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
	{
		Convert num(argv[1]);
		std::cout << num;
        return (0);
	}
    std::cerr << RED;
    std::cerr << "Using: ./convert <value>" << std::endl;
    std::cerr << RESET;
	return (-1);
}