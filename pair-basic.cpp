#include <iostream>
#include <utility>

int main() {
    std::pair<int, std::string> p;

    p.first = 10;
    p.second = "Hello";

    std::cout << "First: " << p.first << std::endl;
    std::cout << "Second: " << p.second << std::endl;

    return 0;
}