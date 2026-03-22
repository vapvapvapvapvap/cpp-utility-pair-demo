#include <iostream>
#include <vector>
#include <utility>

int main() {
    std::vector<std::pair<int, std::string>> students;

    students.push_back({1, "Alice"});
    students.push_back({2, "Bob"});
    students.push_back({3, "Charlie"});

    for (const auto& student : students) {
        std::cout << "ID: " << student.first
                  << ", Name: " << student.second << std::endl;
    }

    return 0;
}