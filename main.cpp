#include "include/is_clean.hpp"

#include <iostream>

int main() {
    long long number;

    std::cout << "Введите число: ";
    std::cin >> number;

    bool result = isClean(number);

    if (result) {
        std::cout << "Число является чистым.\n";
    }
    else {
        std::cout << "Число НЕ является чистым.\n";
    }

    return 0;
}