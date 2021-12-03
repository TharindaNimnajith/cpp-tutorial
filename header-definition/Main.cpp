//
// Created by ASUS on 11/29/2021.
//

#include <iostream>

#include "Calculator.h"

// int sum(int a, int b);

int main() {
    std::cout << sum(1, 2) << std::endl;

    int temp;
    std::cin >> temp;
    return 0;
}

int sum(int a, int b) {
    return a + b;
}
