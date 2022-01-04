//
// Created by ASUS on 1/4/2022.
//

#include "Box.h"

void Box::setLength(double l) {
    length = l;
}

void Box::setWidth(double w) {
    width = w;
}

void Box::setHeight(double h) {
    height = h;
}

double Box::getVolume() const {
    return length * width * height;
}

// overload + operator to add two Box objects
Box Box::operator+(const Box &b) const {
    Box box{};
    box.length = this->length + b.length;
    box.width = this->width + b.width;
    box.height = this->height + b.height;
    return box;
}
