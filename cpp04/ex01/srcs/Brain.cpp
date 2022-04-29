#include "../includes/Brain.hpp"

Brain::Brain(void): _size(0), _current(0)
{
    std::cout << GREEN;
    std::cout << "[Brain] Default constructor called" << std::endl;
    std::cout << RESET;
}

Brain::Brain(Brain const &data): _size(data._size), _current(data._current)
{
    *this = data;
    std::cout << GREEN;
    std::cout << "[Brain] Copy constructor called" << std::endl;
    std::cout << RESET;
    if (this != &data)
    {
        for (int i = 0; i < data._size; i++)
            this->ideas[i] = data.ideas[i];
    }
}

Brain::~Brain(void)
{
    std::cout << RED;
    std::cout << "[Brain] Destructor called" << std::endl;
    std::cout << RESET;
}

Brain   &Brain::operator=(const Brain &data)
{
    this->_size = data._size;
    this->_current = data._current;
    std::cout << GREEN;
    std::cout << "[Brain] Assignement operator called" << std::endl;
    std::cout << RESET;
    if (this != &data)
    {
        for (int i = 0; i < Brain::_IDEAS_NUM; i++)
            this->ideas[i] = data.ideas[i];
    }
    return (*this);
}

bool    Brain::addIdea(std::string const idea)
{
    if (this->_size >= Brain::_IDEAS_NUM)
    {
        if (this->_current >= Brain::_IDEAS_NUM)
            this->_current = 0;
        this->ideas[this->_current++] = idea;
    }
    else
        this->ideas[this->_size++] = idea;
    std::cout << BLUE;
    std::cout << "[Brain] Add idea \"" << idea << "\"" << std::endl;
    std::cout << RESET;
    return (true);
}

bool    Brain::addIdea(std::string idea, int index)
{
    if (this->_wrongIndex(index))
    {
        std::cout << RED;
        std::cout << "[Brain] AddIdea: Invalid index" << std::endl;
        std::cout << RESET;
        return (false);
    }
    std::cout << BLUE;
    std::cout << "[Brain] Add idea \"" << idea << "\" to index " << index << std::endl;
    std::cout << RESET;
    this->ideas[index] = idea;
    return (true);
}

std::string Brain::getIdea(int index)
{
    if (this->_wrongIndex(index))
    {
        std::cout << RED;
        std::cout << "[Brain] getIdea: Invalid index" << std::endl;
        std::cout << RESET;
        return (NULL);
    }
    return (this->ideas[index]);
}

void    Brain::printIdeas(void)
{
    for (int i = 0; i < this->_size; i++)
    {
        std::cout << YELLOW;
        std::cout << "Idea " << i << ": " << this->ideas[i] << std::endl;
        std::cout << RESET;
    }
}

bool    Brain::isEmpty(void)
{
    return (this->_size == 0);
}

bool    Brain::_wrongIndex(int index)
{
    return (index < 0 || index >= this->_size);
}