#include "./includes/iter.hpp"

template <typename T>
void    f(T const &elem)
{
    std::cout << elem << " ";
}

int main(void)
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    iter(array, 6, &f);
    std::cout << std::endl;
    char array1[10] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106};
    iter(array1, 10, &f);
    std::cout << std::endl;
}
