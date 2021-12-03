//
// Created by ASUS on 12/3/2021.
//

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "UnusedValue"

#include <iostream>

void print(int arr[], int size) {
    std::cout << "Size of array inside function: " << sizeof(*arr) << std::endl;
    int *ptr = arr;
    for (int i = 0; i < size; i++) {
        std::cout << "Address of var[" << i << "] =";
        std::cout << ptr << std::endl;
        std::cout << "Value of var[" << i << "] =";
        std::cout << *ptr << std::endl;
        ptr++;  // point to the next location
    }
}

void printString(std::string *text) {
    if (text != nullptr)
        std::cout << "Value: " << *text << std::endl;
}

int main() {
    int x = 10;
    std::string text = "Hello World!";

    int *pX = &x;
    std::string *pText = &text;

    std::cout << "Address of x: " << pX << std::endl;
    std::cout << "Address of text: " << pText << std::endl;

    std::cout << "Value of x: " << pX << std::endl;
    std::cout << "Value of text: " << pX << std::endl;

    // syntactic sugar
    std::cout << "Length of text: " << pText->size() << std::endl;
    std::cout << "Length of text: " << (*pText).size() << std::endl;

    // arrays and pointers
    int arr[] = {1, 2, 3, 4, 5, 6};
    std::cout << "Size of array: " << sizeof(arr) << std::endl;
    print(arr, 6); // array pointer decaying

    // dangling pointers
    std::string *pStr = nullptr;
    pStr = new std::string("Pointer text");
    std::cout << "Before delete" << std::endl;
    printString(pStr);
    std::cout << "After delete" << std::endl;

    return 0;
}

#pragma clang diagnostic pop
