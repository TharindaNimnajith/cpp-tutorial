//
// Created by ASUS on 11/10/2021.
//

// The preprocessors are the directives, which give instructions to the compiler to preprocess the
// information before actual compilation starts
// All preprocessor directives begin with #, and only white-space characters may appear before a
// preprocessor directive on a line
// Preprocessor directives are not C++ statements, so they do not end in a semicolon

// iostream stands for standard input-output stream
#include <iostream>
// https://www.quora.com/What-is-the-difference-between-cstdio-and-stdio-h
// https://stackoverflow.com/questions/28764438/what-the-difference-between-stdio-h-and-iostream
// https://stackoverflow.com/questions/17290144/stdio-vs-iostream
// https://stackoverflow.com/questions/2872543/printf-vs-cout-in-c
// #include <cstdio>
// #include <stdio.h>

// A pragma is a compiler directive that allows to provide additional information to the compiler
// This directive is a special purpose directive and is used to turn on or off some features
// This type of directives are compiler-specific (vary from compiler to compiler)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "UnusedValue"

// Namespaces provide a method for preventing name conflicts in large projects
// Symbols declared inside a namespace block are placed in a named scope that prevents them from
// being mistaken for identically-named symbols in other scopes

// “using namespace std" means we use the namespace named std
// “std" is an abbreviation for standard
// So that means we use all the things with in "std" namespace
// std::cout, std::endl is another way to use the things in "std" namespace
// https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice
using namespace std;

// The main function is a special function
// Every C++ program must contain a function named main
// It serves as the entry point for the program
// The computer will start running the code from the beginning of the main function
int main() {
    int x = 10;
    int y;

    x += 4; // equivalent to x = x + 4
    x -= 5; // equivalent to x = x - 5
    x *= 3; // equivalent to x = x * 3
    x /= 2; // equivalent to x = x / 2
    x %= 4; // equivalent to x = x % 4

    x++; // equivalent to x = x + 1
    ++x; // prefix
    x++; // postfix

    x--; // equivalent to x = x - 1
    --x; // prefix
    x--; // postfix

    cout << x << endl;

    x = 5;
    y = ++x;
    cout << y << endl;

    x = 5;
    y = x++;
    cout << y << endl;

    int temp;
    std::cin >> temp;
    return 0;
}

#pragma clang diagnostic pop
