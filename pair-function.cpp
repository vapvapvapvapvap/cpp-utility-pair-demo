#include <iostream>
#include <utility>

// функция возвращает pair
std::pair<int, int> getMinMax(int a, int b) {
    if (a < b)
        return {a, b};
    else
        return {b, a};
}

int main() {
    std::pair<int, int> result = getMinMax(5, 3);

    std::cout << "Min: " << result.first << std::endl;
    std::cout << "Max: " << result.second << std::endl;

    return 0;
}