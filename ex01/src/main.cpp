#include  "../includes/Span.hpp"


int main() {
    try
    {
        Span sp(10);

        sp.addNumbersFromSelf();
        sp.printContainer();
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;     
        
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    
    try {
        Span sp(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;  

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Span sp(10000);

        std::srand(static_cast<unsigned int>(std::time(0)));

        for (unsigned int i = 0; i < 10000; ++i) {
            int num = std::rand() % 1000000;
            sp.addNumber(num);
        }

        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    try {
        Span sp2(2);
        sp2.addNumber(100);
        std::cout << sp2.shortestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "exception:: " << e.what() << std::endl;
    }

    return 0;
}
