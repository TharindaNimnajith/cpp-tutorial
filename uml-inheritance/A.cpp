//
// Created by ASUS on 11/21/2021.
//

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
#pragma ide diagnostic ignored "UnusedValue"
#pragma clang diagnostic ignored "-Wunknown-pragmas"

#include <iostream>

#include "A.h"

A::A() {
    A::x = 0;
    std::cout << "A Constructor" << std::endl;
}

void A::run() {
    std::cout << "A" << std::endl;
}

A::~A() {
    std::cout << "A Destructor" << std::endl;
}

#pragma clang diagnostic pop
