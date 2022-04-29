#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contacts {
private:
	static std::string   data[5];
	std::string          info[5];

public:
	bool    setInfo(size_t index);
	void    showInfo(int indx);
	std::string  normContact(std::string str);
	void    showContact();
};

#endif