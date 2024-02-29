#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
int main() {
    std::vector<std::string> firstVector = {"Sachin", "Rohit", "Virat", "Dhoni", "Surya"};
    std::cout << "Elements of the first vector in reverse format:" << std::endl;
    for (auto it = firstVector.rbegin(); it != firstVector.rend(); ++it) {
        std::cout << *it <<std::endl;
    }
    std::vector<std::string> secondVector;
    std::string userInput;
    std::cout << "Enter 5 elements for the second vector:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cin >> userInput;
        secondVector.push_back(userInput);
    }
    for (auto it = secondVector.begin(); it != secondVector.end();) {
        auto found = std::find(firstVector.begin(), firstVector.end(), *it);
        if (found != firstVector.end()) {
            std::cout << "Matching element found: " << *it << std::endl;
            ++it; 
        } else {
            firstVector.push_back(*it);
            it = secondVector.erase(it);
        }
    }
    std::sort(firstVector.begin(), firstVector.end());
    std::sort(secondVector.begin(), secondVector.end());

    std::cout << "First vector elements in ascending format:" << std::endl;
    for (const auto& element : firstVector) {
        std::cout << element << std::endl;
    }
    std::cout << "Second vector elements in ascending format:" << std::endl;
    for (const auto& element : secondVector) {
        std::cout << element <<std::endl;
    }
    return 0;
}