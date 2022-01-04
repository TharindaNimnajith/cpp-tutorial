//
// Created by ASUS on 1/4/2022.
//

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

#include <iostream>

#include "X.h"

X::X() {
    std::cout << "X constructor called" << std::endl;
}

void X::bar() {
    std::cout << "X's implementation of bar" << std::endl;
}

void X::qux() {
    std::cout << "X's implementation of qux" << std::endl;
}

X::~X() {
    std::cout << "X destructor called" << std::endl;
}

#pragma clang diagnostic pop
