//
// Created by ASUS on 1/4/2022.
//

#include <iostream>

// three methods of passing values to a function
// 1. pass by value - not recommended for large objects due to performance issues caused by copying
// 2. pass by pointer
// 3. pass by reference (address) - recommended

void incrementByValue(int value) {
    ++value;
    std::cout << "Incremented by value " << value << std::endl;
}

void incrementByPointer(int *address) {
    ++(*address);
    std::cout << "Incremented by pointer " << *address << std::endl;
}

// recommended
void incrementByReference(int &ref) {
    ++ref;
    std::cout << "Incremented by reference " << ref << std::endl;
}

int main() {
    int x = 0;

    std::cout << "Original value: " << x << std::endl;  // 0
    incrementByValue(x);  // 1

    std::cout << "Original value: " << x << std::endl;  // 0
    incrementByPointer(&x);  // 1

    // recommended
    std::cout << "Original value: " << x << std::endl;  // 1
    incrementByReference(x);  // 2

    int val = 0;
    std::cout << "val: " << val << std::endl;  // 0
    int &ref = val;
    ref = 399;
    std::cout << "val: " << val << std::endl;  // 399
    std::cout << "ref: " << ref << std::endl;  // 399

    return 0;
}
