//
// Created by ASUS on 11/21/2021.
//

#include <iostream>

#include "B.h"

void B::run() {
    std::cout << "B" << std::endl;
}

B::B() {
    B::y = 0;
    std::cout << "B Constructor" << std::endl;
}

B::~B() {
    std::cout << "B Destructor" << std::endl;
}
