#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(10000);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::vector<int> l;
        l.reserve(100);
        for (int i = 0; i < 100; i++)
            l.push_back(i + 20);
        sp.addNumber(l.begin(), l.end());
        sp.addNumber(3000);
        // for (size_t i = 0; i < sp.getArray().size(); i++)
        //     std::cout << sp.getArray()[i] << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}