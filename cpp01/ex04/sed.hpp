#ifndef SED_HPP
#define SED_HPP

#include <iostream>
# include <fstream>
# include <string>

class Sed {
public:
    Sed();
    ~Sed();
    void    replace(std::string &file, std::string &inp, std::string &out);
};

#endif