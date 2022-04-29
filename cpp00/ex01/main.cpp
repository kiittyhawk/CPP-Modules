#include "phoneBook.hpp"

int main()
{
    std::string  cmd;
    bool    run = true;
    phoneBook   book;

    std::cout << "This is your phone book. To use it, you have several commands: \n";
    book.prompt();
    while (run)
    {
        std::cout << "> ";
        getline(std::cin, cmd);
        if (cmd == "ADD" || cmd == "add")
            book.addContact();
        else if (cmd == "SEARCH" || cmd == "search")
            book.searchContact();
        else if (cmd == "EXIT" || cmd == "exit")
            book.exitProgramm(run);
        else if (cmd == "HELP" || cmd == "help")
            book.prompt();
        else if (cmd == "")
            continue ;
        else
            std::cout << "Command \"" << cmd << "\" not found" << std::endl;
    }
    return (0);
}