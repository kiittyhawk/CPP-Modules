#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include "./Color.hpp"

template <typename T>
class Array
{
    private:
        T               *_array;
        unsigned int    _len;

    public:
        Array(void): _array(NULL), _len(0) {}
        Array(unsigned int const &len): _len(len) {_array = new T[len];}
        Array(const Array<T> &data): _len(data._len), _array(new T[data._len]) {*this = data;}
        unsigned int    size(void) const {return (this->_len);}
        T   *getArr(void) const {return (this->_array);}
        ~Array(void) {
            delete[] this->_array;
        }
        Array<T>   &operator =(Array<T> const &data) {
            if (this->_array != NULL)
                delete[] this->_array;
            this->_len = data.size();
            this->_array = new T[data.size()];
            for (size_t i = 0; i < data.size(); i++) {
                if (i >= this->_len)
                    throw OutOfRange();
                this->_array[i] = data._array[i];
            }
            return (*this);
        }
        T   &operator[](unsigned int i) {
            if (i < 0 || i >= this->size())
                throw OutOfRange();
            return (this->_array[i]);
        }
        class OutOfRange : public std::exception {
            virtual const char *what() const throw() {
                return ("Out of range");
            }
        };

};
template <typename T>
std::ostream    &operator<<(std::ostream &ostream, Array<T> const &data) {
    ostream << YELLOW;
    for (int i = 0; i < data.size(); i++)
        ostream << data.getArr()[i] << " ";
    ostream << RESET;
    return (ostream);
}

#endif