//
// Created by ASUS on 12/4/2021.
//

#include <iostream>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "UnusedLocalVariable"

int main() {
    int a[5];
    /*
    for (int x = 0; x < 5; x++)
        a[x] = 42;
    */
    for (int &x: a)
        x = 42;
    /*
    for (int x = 0; x < 5; x++)
        std::cout << a[x] << std::endl;
    */
    for (int x: a)
        std::cout << x << std::endl;

    int b[5] = {11, 45, 62, 70, 88};
    b[2] = 42;
    std::cout << b[0] << std::endl;
    std::cout << b[3] << std::endl;

    int x[2][3] = {{2, 3, 4},
                   {8, 9, 10}};
    std::cout << x[0][2] << std::endl;

    int temp;
    std::cin >> temp;
    return 0;
}

#pragma clang diagnostic pop
