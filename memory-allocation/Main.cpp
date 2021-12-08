//
// Created by ASUS on 11/30/2021.
//

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "UnusedValue"
#pragma ide diagnostic ignored "UnusedLocalVariable"
#pragma ide diagnostic ignored "DanglingPointer"
#pragma ide diagnostic ignored "ConstantConditionsOC"

// stack vs. heap
// https://www.geeksforgeeks.org/stack-vs-heap-memory-allocation
// https://stackoverflow.com/questions/5836309/stack-memory-vs-heap-memory

// stack memory allocation
// faster memory allocation and de-allocation
// less storage
// thread-safe
// limited space allocated for the program
// does not have to worry about memory allocation and de-allocation of stack variables
// as soon as a method finishes its execution all the data belongs to that method flushes out
// from the stack automatically

// heap memory allocation
// slower memory allocation and de-allocation
// larger storage
// not thread-safe as data is accessible or visible to all threads
// accessible or exists as long as the whole application runs
// need proper memory handling to avoid memory leaks

#include <iostream>
#include <cstring>

int main() {
    // allocated on stack
    int a;
    int b[10];
    int n = 20;
    std::string str = "Stack";
    std::cout << str.size() << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;

    // allocated on heap
    // 1. malloc/free - not recommended in c++ (use for c only)
    // 2. new/delete - recommended in c++ (constructor, destructor friendly)
    // 3. c++11 smart pointers - highly recommended (automatic memory handling)

    // 1. malloc/free - not recommended in c++ (use for c only)
    char *arr = (char *) malloc(5 * sizeof(char));
    strcat_s(arr, 5, "text");
    std::cout << arr << std::endl;
    free(arr);
    arr = nullptr;
    std::cout << "--------------------------------------------------------" << std::endl;

    // 2. new/delete - recommended in c++ (constructor, destructor friendly)
    int *p = nullptr;  // null pointer
    // int *p = NULL;  // null pointer - deprecated
    // null pointer is a constant with a value of 0
    // it is defined in several of the standard libraries, including iostream
    int *ptr = new int[10]; // request memory
    *ptr = {4};  // store value
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    // delete ptr;  // free up the memory
    delete[] ptr;  // free up the memory
    // memory is only "freed" until it is reused but not "erased"
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    // now ptr is a dangling pointer (pointer that is left pointing to non-existent memory location)
    // delete operator frees up the memory allocated for the variable
    // delete operator does not delete the pointer itself, as the pointer is stored on the stack
    ptr = new int;  //reusing for a new address
    *ptr = 5;  // store value
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;
    // delete ptr;  // free up the memory
    delete[] ptr;  // free up the memory
    std::cout << "--------------------------------------------------------" << std::endl;
    auto *h = new std::string("Heap");
    std::cout << h << std::endl;
    if (h != nullptr) {
        delete h;
        h = nullptr;
    }

    // 3. c++11 smart pointers - highly recommended (automatic memory handling)
    // pointers are used for accessing the resources which are external to the program
    // for accessing the heap memory, pointers are used
    // usually, when accessing any external resource we just use a copy of the resource
    // if we make any change to it, we just change it in the copied version
    // but, if we use a pointer to the resource, we’ll be able to change the original resource
    // when using smart pointers, when the object is destroyed it frees the memory as well
    // so, we don’t need to delete it as Smart Pointer does will handle it
    // smart pointer mechanism is similar to garbage collection in languages like java or c#
    // https://www.geeksforgeeks.org/smart-pointers-cpp
    // https://en.wikipedia.org/wiki/Smart_pointer

    int temp;
    std::cin >> temp;
    return 0;
}

#pragma clang diagnostic pop
