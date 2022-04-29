#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "./Color.hpp"

class Brain
{
    private:
        static const int    _IDEAS_NUM = 100;
        int                 _size;
        int                 _current;

        bool        _wrongIndex(int index);
    public:
        Brain(void);
        Brain(const Brain &copy);
        ~Brain(void);

        std::string ideas[Brain::_IDEAS_NUM];

        Brain   &operator=(const Brain &data);

        std::string getIdea(int index);
        bool        addIdea(std::string const idea);
        bool        addIdea(std::string idea, int index);
        void        printIdeas(void);
        bool        isEmpty(void);
};

#endif