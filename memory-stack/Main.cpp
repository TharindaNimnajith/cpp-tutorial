//
// Created by ASUS on 11/22/2021.
//

#include <iostream>

void func(const int *mainLocal) {
    int funcLocal;
    if (mainLocal < &funcLocal)
        std::cout << "Stack is growing up" << std::endl;
    else
        std::cout << "Stack is growing down" << std::endl;
}

int main() {
    int mainLocal;
    func(&mainLocal);

    int temp;
    std::cin >> temp;
    return 0;
}
