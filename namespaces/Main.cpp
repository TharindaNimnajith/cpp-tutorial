//
// Created by ASUS on 11/30/2021.
//

#include <iostream>

void print() {
    std::cout << "Standard" << std::endl;
}

namespace abc {
    void print() {
        std::cout << "ABC" << std::endl;
    }
}

int main() {
    print();
    abc::print();
}
