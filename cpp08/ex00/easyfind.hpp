#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>

class NotFound : public std::exception {
    virtual const char *what() const throw () {
        return ("Not found");
    }
};

template <typename T>
typename T::iterator easyfind(T &array, int const num)
{
    typename T::iterator i = std::find(array.begin(), array.end(), num);
    if (i == array.end())
        throw NotFound();
    return (i);
}

#endif