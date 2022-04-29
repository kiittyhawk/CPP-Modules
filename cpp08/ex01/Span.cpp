#include "Span.hpp"

Span::Span(void): _N(0) {}

Span::Span(unsigned int const &n): _N(n) {this->_array.reserve(n);}

Span::Span(Span const &data) {*this = data;}

Span &Span::operator=(Span const &data) 
{
    if (!this->_array.empty())
        this->_array.clear();
    this->_array = data._array;
    this->_N = data._N;
    return (*this);
}

unsigned int Span::getN(void) const
{
    return (this->_N);
}

std::vector<int> Span::getArray(void) const
{
    return (this->_array);
}

Span::~Span(void) {}

void Span::addNumber(int const val)
{
    if (this->_array.size() < this->_N)
        this->_array.push_back(val);
    else
        throw ArrayIsFullException();
}

unsigned int Span::shortestSpan(void)
{
    if (this->_array.size() < 2)
        throw FewValuesException();
    unsigned int res = std::numeric_limits<int>::max();
    std::vector<int>::iterator i1 = this->_array.begin();
    std::vector<int>::iterator i2 = this->_array.begin();
    i2++;
    while (i2 != this->_array.end())
    {
        if (std::abs(*i1 - *i2) < res)
            res = std::abs(*i1 - *i2);
        i1++;
        i2++;
    }
    return (res);
}

unsigned int Span::longestSpan(void)
{
    if (this->_array.size() < 2)
        throw FewValuesException();
    int res = std::numeric_limits<int>::min();
    std::vector<int>::iterator i1 = this->_array.begin();
    std::vector<int>::iterator i2 = this->_array.begin();
    i2++;
    while (i2 != this->_array.end())
    {
        if (std::abs(*i1 - *i2) > res)
            res = std::abs(*i1 - *i2);
        i1++;
        i2++;
    }
    return (res);
}
