//
// Created by ASUS on 1/4/2022.
//

#include <iostream>

// in compile time, required methods are generated for appropriate data types
template<typename T>
inline T const &Max(T const &a, T const &b) {
    return a < b ? b : a;
}

int main() {
    int i = 39;
    int j = 20;
    std::cout << "Max: " << Max(i, j) << std::endl;

    double x = 39.5;
    double y = 20.4;
    std::cout << "Max: " << Max(x, y) << std::endl;

    std::string p = "Hello";
    std::string q = "World!";
    std::cout << "Max: " << Max(p, q) << std::endl;

    return 0;
}
