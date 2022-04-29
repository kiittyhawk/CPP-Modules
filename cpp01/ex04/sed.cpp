#include "sed.hpp"

Sed::Sed() {}

Sed::~Sed() {}

void    Sed::replace(std::string &file, std::string &imp, std::string &out) {
    std::ifstream           read;
    std::ofstream           write;
    std::string             buf;
    std::string             filename;
    std::size_t             pos = 0;
    char                    ch;

    filename = file + ".replace";
    read.open(file.c_str(), std::ios::in);
    if (!read) {
        std::cout << "Unable to open the file" << std::endl;
        return ;
    }
    while (read.get(ch))
        buf += ch;
    if (!read.eof()) {
        std::cout << "Failed to read file" << std::endl;
        return ;
    }
    read.close();
    write.open(filename.c_str(), std::ios::trunc);
    if (!write) {
        std::cout << "Failed to create a file" << std::endl;
        read.close();
        return ;
    }
    while (true) {
        pos = buf.find(imp, pos);
        if (pos == std::string::npos)
            break;
        buf.erase(pos, imp.length());
        buf.insert(pos, out);
        pos += out.length();
    }
    write << buf << std::flush;
    write.close();
}