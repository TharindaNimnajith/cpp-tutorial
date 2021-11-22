//
// Created by ASUS on 11/21/2021.
//

#include <iostream>

#include "A.h"

A::A() {
    A::x = 0;
    std::cout << "A Constructor" << std::endl;
};

void A::run() {
    std::cout << "A" << std::endl;
}

A::~A() {
    std::cout << "A Destructor" << std::endl;
};
