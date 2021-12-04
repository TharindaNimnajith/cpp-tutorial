//
// Created by ASUS on 12/4/2021.
//

// when there are more functions that are using the same variable, instead of sending
// a value between two functions back and forth, it's more practical to use the address
// of it to change it from inside the other function
// the second function knows where the value is located, and so can change it
// when returning to the first function, the variable is already edited
// less memory used
// fewer transactions

#include <iostream>

int main() {
    int score = 5;

    // & - access address of variable stored in a pointer and address of pointer itself
    // * - find value of a variable stored in a pointer
    std::cout << &score << std::endl;  // 0x5be55ffe0c
    std::cout << score << std::endl;  // 5

    int v = 50;  // v is variable
    int *p;  // declaring pointer p for variable v
    p = &v;  // storing v's address in pointer p
    *p = 60;  // v's value is now 60

    int v2 = 70;  // v2 is another variable
    int *p2;  // declaring pointer p2 for variable v2
    p2 = &v2;  // storing v2's address in pointer p2

    std::cout << v << std::endl;  // value of (60)
    std::cout << &v << std::endl;  // address of v
    std::cout << p << std::endl;  // address of v
    std::cout << *p << std::endl;  // value of v (60)
    std::cout << &p << std::endl;  // address of p

    std::cout << v2 << std::endl;  // value of v2 (70)
    std::cout << &v2 << std::endl;  // address of v2
    std::cout << p2 << std::endl;  // address of v2
    std::cout << *p2 << std::endl;  // value of v2 (70)
    std::cout << &p2 << std::endl;  // address of p2

    int temp;
    std::cin >> temp;
    return 0;
}
