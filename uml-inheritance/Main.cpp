//
// Created by ASUS on 11/21/2021.
//

#include <iostream>

#include "D.h"

int main() {
    D *d = new D();
    //d->run(); // non-static member 'run' found in multiple base-class subobjects of type 'A'
    d->B::run();
    d->C::run();

    int temp;
    std::cin >> temp;
    return 0;
}
