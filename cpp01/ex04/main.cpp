#include "sed.hpp"

int main(int argc, char **argv) {
    Sed replace;

    if (argc != 4) {
        std::cout << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return (-1);
    }
    if (argv[2][0] == '\0' || argv[3][0] == '\0') {
        std::cout << "You cannot use empty strings" << std::endl;
        return (-1);
    }
    std::string file(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    replace.replace(file, s1, s2);
    return (0);
}