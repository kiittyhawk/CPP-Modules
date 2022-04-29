#include "phoneBook.hpp"

phoneBook::phoneBook()
{
    this->size = 0;
}

void   phoneBook::prompt(void)
{
    std::cout << "\n• ADD: save a new contact\n" <<\
            "• SEARCH: display a specific contact\n" <<\
            "• HELP: information about commands\n" <<\
            "• EXIT: exiting the program\n" << std::endl;
}

void    phoneBook::addContact(void)
{
    if (this->size == 8)
        this->size = 0;
    if (this->contact[this->size].setInfo(this->size))
        this->size++;
}

void    phoneBook::searchContact(void)
{
    int index = 1;

    if (this->size < 1) {
        std::cout << "Your Phonebook is empty." << std::endl;
        return ;
    }
    showTable();
    std::cout << "For more information, enter the contact number\nTo exit the search, enter 0 or any letter" << std::endl;
    while (index != 0) {
        std::cout << "> ";
        std::cin >> index;
        std::cin.clear();
        if (index == 0) {
            std::cout << "Exit" << std::endl;
            std::cin.ignore(1000, '\n');
            return ;
        }
        else if (index < 0 || index > 8) {
            std::cout << "Invalid index" << std::endl;
            std::cin.ignore(1000, '\n');
            continue ;
        }
        else
            this->contact[index - 1].showContact();
    }
}

void    phoneBook::showTable(void)
{
    std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < 8; i++)
		this->contact[i].showInfo(i);
}

void    phoneBook::exitProgramm(bool &run)
{
    run = false;
    std::cout << "Thanks for using it. Have a nice day!" << std::endl;
}
