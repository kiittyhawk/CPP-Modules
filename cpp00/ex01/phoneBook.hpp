#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <cmath>
#include "Contacts.hpp"

class phoneBook {
private:
    size_t      size;
    Contacts    contact[8];

public:
    phoneBook();
    void    prompt();
    void    addContact();
    void    searchContact();
    void    exitProgramm(bool &run);
    void    showTable(void);
};

#endif