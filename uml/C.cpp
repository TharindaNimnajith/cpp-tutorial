//
// Created by ASUS on 11/21/2021.
//

#include <iostream>

#include "C.h"

//void C::run() {
//    std::cout << "C" << std::endl;
//}

C::C() {
    C::z = 0;
    std::cout << "C Constructor" << std::endl;
};

C::~C() {
    std::cout << "C Destructor" << std::endl;
};
