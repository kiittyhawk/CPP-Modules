#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include "Color.hpp"

template<class T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;

        MutantStack(void);
        MutantStack(MutantStack const &data);
        virtual ~MutantStack(void);

        MutantStack &operator =(MutantStack const &data);

        iterator begin(void);
        iterator end(void);
};

template <class T>
MutantStack<T>::MutantStack(void): std::stack<T>() {}

template <class T>
MutantStack<T>::MutantStack(MutantStack const &data): std::stack<T>(data) {}

template <class T>
MutantStack<T>::~MutantStack(void) {}

template <class T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &data)
{
    std::stack<T>::operator=(data);
    return (*this);
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void) {return this->c.begin();}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::end(void) {return this->c.end();}

#endif