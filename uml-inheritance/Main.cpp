//
// Created by ASUS on 11/21/2021.
//

#include "D.h"

int main8() {
    D *d = new D();
    //d->run(); // non-static member 'run' found in multiple base-class subobjects of type 'A'
    d->B::run();
    d->C::run();
    return 0;
}
