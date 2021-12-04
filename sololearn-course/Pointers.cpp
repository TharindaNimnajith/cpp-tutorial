//
// Created by ASUS on 12/4/2021.
//

// pointer is a variable, with the address of another variable as its value
// pointer tells the computer to "point at" the memory address of whatever variable it is used on
// dynamic memory allocation cannot be performed without using pointers
// pointers share the same data type (long hexadecimal number to represent a memory address)
// difference between pointers of different data types - data type of the variable that the pointer points to

// when there are more functions that are using the same variable, instead of sending
// a value between two functions back and forth, it's more practical to use the address
// of it to change it from inside the other function
// the second function knows where the value is located, and so can change it
// when returning to the first function, the variable is already edited
// less memory used
// fewer transactions

#include <iostream>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "UnusedLocalVariable"

int main() {
    int score = 5;
    int *scorePtr;
    scorePtr = &score;

    // & (Address-of operator) - returns the address of variable stored in a pointer and address of pointer itself
    // * (Contents-of or dereference operator) - returns the value of a variable stored in a pointer
    std::cout << &score << std::endl;  // memory address of score variable
    std::cout << score << std::endl;  // value of score variable (5)
    // std::cout << *score << std::endl;  // error - operand of '*' must be a pointer but has type "int"
    std::cout << scorePtr << std::endl;  // memory address of score variable
    std::cout << *scorePtr << std::endl;  // value of score variable (5)
    std::cout << &scorePtr << std::endl;  // memory address of scorePtr pointer
    std::cout << "--------------------------------------------------------" << std::endl;

    score = score + 4;
    std::cout << &score << std::endl;  // memory address of score variable
    std::cout << score << std::endl;  // value of score variable (9)
    std::cout << scorePtr << std::endl;  // memory address of score variable
    std::cout << *scorePtr << std::endl;  // value of score variable (9)
    std::cout << &scorePtr << std::endl;  // memory address of scorePtr pointer
    std::cout << "--------------------------------------------------------" << std::endl;

    score = *scorePtr + 4;
    std::cout << &score << std::endl;  // memory address of score variable
    std::cout << score << std::endl;  // value of score variable (13)
    std::cout << scorePtr << std::endl;  // memory address of score variable
    std::cout << *scorePtr << std::endl;  // value of score variable (13)
    std::cout << &scorePtr << std::endl;  // memory address of scorePtr pointer
    std::cout << "--------------------------------------------------------" << std::endl;

    *scorePtr = *scorePtr + 4;
    std::cout << &score << std::endl;  // memory address of score variable
    std::cout << score << std::endl;  // value of score variable (17)
    std::cout << scorePtr << std::endl;  // memory address of score variable
    std::cout << *scorePtr << std::endl;  // value of score variable (17)
    std::cout << &scorePtr << std::endl;  // memory address of scorePtr pointer
    std::cout << "--------------------------------------------------------" << std::endl;

    // asterisk sign can be placed next to the data type, variable name, or in the middle
    int *ip;  // pointer to an integer
    double *dp;  // pointer to a double
    float *fp;  // pointer to a float
    char *ch;  // pointer to a character

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
    std::cout << "--------------------------------------------------------" << std::endl;

    std::cout << v2 << std::endl;  // value of v2 (70)
    std::cout << &v2 << std::endl;  // address of v2
    std::cout << p2 << std::endl;  // address of v2
    std::cout << *p2 << std::endl;  // value of v2 (70)
    std::cout << &p2 << std::endl;  // address of p2

    int temp;
    std::cin >> temp;
    return 0;
}

#pragma clang diagnostic pop
