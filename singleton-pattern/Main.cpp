//
// Created by ASUS on 11/21/2021.
//

#include "Singleton.h"

int main7() {
    Singleton *obj1 = Singleton::getInstance();
    Singleton *obj2 = Singleton::getInstance();
    std::cout << obj1 << std::endl << obj2 << std::endl; // same addresses
    return 0;
}
