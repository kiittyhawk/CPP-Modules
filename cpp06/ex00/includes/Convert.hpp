#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <limits>
#include "./Color.hpp"


#include <iostream>

class Convert
{
    private:
        std::string _value;
        
    public:
        Convert(void);
        Convert(std::string num);
        Convert(Convert const &conversion);
        ~Convert(void);

        Convert &operator= (const Convert &conversion);

        std::string getNum(void) const;

        bool    checkType(void) const;
        int     toInt(void) const;
        char    toChar(void) const;
        float   toFloat(void) const;
        double  toDouble(void) const;
};

std::ostream &operator<< (std::ostream &out, Convert const &conversion);

#endif