//
// Created by ASUS on 1/4/2022.
//

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "UnusedValue"

#include <iostream>

#include "Rectangle.h"
#include "X.h"
#include "Y.h"

int main() {
    Rectangle rectangle;
    rectangle.setWidth(5);
    rectangle.setHeight(7);
    std::cout << rectangle.getArea() << std::endl;

    X *x = new Y();
    x->bar();
    delete x;
    x = nullptr;

    return 0;
}

#pragma clang diagnostic pop
