//
// Created by ASUS on 11/10/2021.
//

#include <iostream>

extern int x;

int main() {
    // single line comment
    /*
     multi-line
     comment
    */
    std::cout << x;  // linker error
    return 0;
}
