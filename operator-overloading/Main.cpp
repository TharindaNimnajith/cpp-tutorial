//
// Created by ASUS on 1/4/2022.
//

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "cppcoreguidelines-pro-type-member-init"

#include <iostream>

#include "Box.h"

int main() {
    Box box1;
    Box box2;
    Box box3;

    double volume;

    box1.setLength(6.0);
    box1.setWidth(7.0);
    box1.setHeight(5.0);

    box2.setLength(12.0);
    box2.setWidth(13.0);
    box2.setHeight(10.0);

    volume = box1.getVolume();
    std::cout << "Volume of box 1: " << volume << std::endl;

    volume = box2.getVolume();
    std::cout << "Volume of box 2: " << volume << std::endl;

    // add two Box objects
    box3 = box1 + box2;

    volume = box3.getVolume();
    std::cout << "Volume of box 3: " << volume << std::endl;

    return 0;
}

#pragma clang diagnostic pop
