//
// Created by ASUS on 1/4/2022.
//

#include <iostream>

#include "Y.h"

Y::Y() {
    std::cout << "Y constructor called" << std::endl;
}

void Y::bar() {
    std::cout << "Y's implementation of bar" << std::endl;
}

void Y::run() {
    std::cout << "Y's implementation of run" << std::endl;
}

Y::~Y() {
    std::cout << "Y destructor called" << std::endl;
}
