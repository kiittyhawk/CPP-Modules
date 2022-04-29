#include "./includes/Array.hpp"

int	main(void)
{
	Array<char> chArr = Array<char>(4);
    Array<char> intArr = Array<char>(2);

    std::cout << "Test #1" << std::endl;
    try
    {
        for (int i = 0; i < chArr.size(); i++) {
            chArr[i] = i + 97;
        }
        std::cout << "chArr: " << chArr << std::endl;
        intArr = chArr;
        std::cout << "intArr: " << intArr << std::endl;
        for (int i = 0; i < intArr.size(); i++) {
            intArr[i] -= 49;
        }
        std::cout << "intArr: " << intArr << std::endl;
        std::cout << "chArr: " << chArr << std::endl;
        std::cout << intArr[10] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED;
        std::cerr << e.what() << '\n';
        std::cerr << RESET;
    }
    std::cout << "\nTest #2" << std::endl;
    try
    {
        Array<int> a = Array<int>(10);
        // std::cout << "a: " << &a << std::endl;
        for (int i = 0; i < a.size(); i++) {
            a[i] = i + 1;
        }
        std::cout << "a: " << a << std::endl;
        Array<int> b = a;
        // std::cout << "b: " << &b << std::endl;
        std::cout << "b: " << b << std::endl;
        for (int i = 0; i < b.size(); i++) {
            b[i] = a[i] * 10;
        }
        std::cout << "b: " << b << std::endl;
        std::cout << "a: " << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED;
        std::cerr << e.what() << '\n';
        std::cerr << RESET;
    }
    std::cout << "\nTest #3" << std::endl;
    try
    {
        Array<int> a = Array<int>(3);
        for (int i = 0; i < a.size(); i++)
        {
            a[i] = (i + 1) * 10;
            std::cout << YELLOW;
            std::cout << "a[" << i << "]: " << a[i] << std::endl;
            std::cout << RESET;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}