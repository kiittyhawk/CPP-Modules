#include <iostream>

std::string  removeEmpty(std::string str)
{
    std::string  s;
    size_t firstPos, endPos;

    firstPos = str.find_first_not_of(" \t");
    if (firstPos == str.length())
        return ("");
    endPos = str.find_last_not_of(" \t");
    return (str.substr(firstPos, endPos - firstPos + 1));
}

int main(int argc, char **argv)
{
    int     i, j;
    std::string  str;

    if (argc > 1)
    {
        i = 0;
        while (argv[++i])
        {
            j = -1;
            str = removeEmpty(argv[i]);
            while (str[++j])
                std::cout << (char)toupper(str[j]);
            if (i != argc - 1)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
