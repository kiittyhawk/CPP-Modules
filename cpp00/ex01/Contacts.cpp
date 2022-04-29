#include "Contacts.hpp"

std::string Contacts::data[5] = {
    "First Name",
    "Last Name",
    "Nickname",
    "Phone number",
    "Darkest Secret"
};

bool    Contacts::setInfo(size_t index)
{
    size_t   total = 0;

    for (int i = 0; i < 5; i++) {
        while (total == 0) {
            std::cout << Contacts::data[i] << ": ";
            getline(std::cin, this->info[i]);
            total = this->info[i].length();
            if (total == 0) {
                std::cout << "A contact cannot have empty lines\nTry again" << std::endl;
            }
            else
            {
                total = 0;
                break ;
            }
        }
    }
    std::cout << index + 1 << " contact was created." << std::endl;
    return (true);
}

std::string  Contacts::normContact(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9).append("."));
    return (str);
}

void    Contacts::showInfo(int indx)
{
    std::string first = normContact(this->info[0]);
    std::string last = normContact(this->info[1]);
    std::string nick = normContact(this->info[2]);
    std::cout << "|" << std::setw(10) << indx + 1;
    std::cout << "|" << std::setw(10) << std::right << first;
    std::cout << "|" << std::setw(10) << std::right << last;
    std::cout << "|" << std::setw(10) << std::right << nick << "|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;

}

void    Contacts::showContact()
{
    for (int i = 0; i < 5; i++) {
        std::cout << Contacts::data[i] << \
        ": " << this->info[i] << std::endl;
    }
}
