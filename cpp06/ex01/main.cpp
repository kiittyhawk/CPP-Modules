#include "./includes/Color.hpp"

struct Data
{
    size_t      index;
    std::string str;
};

uintptr_t   serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
    Data        *data = new Data();
    Data        *tmpData;
    uintptr_t   ptr;

    data->index = 42;
    data->str = "test";

    std::cout << std::endl;
    std::cout << YELLOW;
    std::cout << "struct's address:\t" << data << std::endl;
    std::cout << "tmpData's index:\t" << data->index << std::endl;
    std::cout << "tmpData's string:\t" << data->str << std::endl;
    std::cout << std::endl;
    std::cout << RESET;

    std::cout << PURPLE;
    std::cout << "Serialize" << std::endl;
    std::cout << RESET;
    ptr = serialize(data);
    std::cout << YELLOW;
    std::cout << "ptr's address:\t\t" << &ptr << std::endl;
    std::cout << "ptr's data:\t\t" << ptr << std::endl;

    std::cout << std::endl;
    std::cout << PURPLE;
    tmpData = deserialize(ptr);
    std::cout << "Deserialize" << std::endl;
    std::cout << RESET;
    std::cout << YELLOW;
    std::cout << "struct's address:\t" << tmpData << std::endl;
    std::cout << "tmpData's index:\t" << tmpData->index << std::endl;
    std::cout << "tmpData's string:\t" << tmpData->str << std::endl;
    std::cout << RESET;
    std::cout << std::endl;

    delete data;
}