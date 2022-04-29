#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iterator>
#include <vector>
#include <list>
#include <iostream>
#include <limits>

class Span
{
    private:
        unsigned int        _N;
        std::vector<int>    _array;
    
    public:
        Span(void);
        Span(unsigned int const &n);
        Span(Span const &data);
        ~Span(void);

        Span    &operator =(Span const &data);

        std::vector<int>    getArray(void) const;
        unsigned int        getN(void) const;
        void                addNumber(int const val);
        unsigned int        shortestSpan(void);
        unsigned int        longestSpan(void);

        template <typename T>
        void    addNumber(T i1, T i2)
        {
            if (this->_array.size() >= this->_N)
                throw ArrayIsFullException();
            while (i1 != i2)
            {
                this->_array.push_back(*i1);
                i1++;
            }
        }

        class ArrayIsFullException : public std::exception{
            virtual const char *what() const throw(){
                return ("Array is full");
            }
        };
        class FewValuesException : public std::exception{
            virtual const char *what() const throw(){
                return ("Few values");
            }
        };
};

#endif