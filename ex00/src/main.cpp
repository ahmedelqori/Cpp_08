#include  "../includes/easyfind.hpp"
#include <vector>

int main() {
    std::vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
    try {
        std::vector<int>::iterator it = easyfind(v, 10);
        std::cout << "Found: " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}