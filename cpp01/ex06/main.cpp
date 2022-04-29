#include "Harl.hpp"

void    runFunc(std::string say) {
    Harl    lvl;

    std::cout << "[ " + say + " ]" << std::endl;
    lvl.complain(say);
    std::cout << std::endl;
}

int getArg(std::string lvl) {
    std::string arrlvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    for (; i < 4; i++) {
        if (lvl == arrlvl[i])
            break ;
    }
    return (i);
}

int main(int ac, char **av) {
    if (ac != 2) {
        std::cout << "Wrong number of arguments" << std::endl;
        return (-1);
    }
    int lvl = getArg(av[1]);
    switch (lvl) {
        case 0: runFunc("DEBUG"); __attribute__ ((fallthrough));
        case 1: runFunc("INFO"); __attribute__ ((fallthrough));
        case 2: runFunc("WARNING"); __attribute__ ((fallthrough));
        case 3: runFunc("ERROR"); break;
        default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return (0);
}