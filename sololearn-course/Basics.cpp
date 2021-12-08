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

// string header provides the std::string class and related functions and operators
#include <string>
// cstring provides functions for dealing with c-style strings (null-terminated arrays of characters)
// cstring includes functions like strlen and strcpy
// cstring is the C++ version of the classic string.h header from C
// #include <cstring>
// #include <string.h>

// A pragma is a compiler directive that allows to provide additional information to the compiler
// This directive is a special purpose directive and is used to turn on or off some features
// This type of directives are compiler-specific (vary from compiler to compiler)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "UnusedLocalVariable"
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

    x += 4;  // equivalent to x = x + 4
    x -= 5;  // equivalent to x = x - 5
    x *= 3;  // equivalent to x = x * 3
    x /= 2;  // equivalent to x = x / 2
    x %= 4;  // equivalent to x = x % 4

    x++;  // equivalent to x = x + 1
    ++x;  // prefix
    x++;  // postfix

    x--;  // equivalent to x = x - 1
    --x;  // prefix
    x--;  // postfix

    cout << x << endl;

    x = 5;
    y = ++x;
    cout << y << endl;

    x = 5;
    y = x++;
    cout << y << endl;

    // signed: A signed integer can hold both negative and positive numbers.
    // unsigned: An unsigned integer can hold only positive values.
    // short: Half of the default size (2 bytes).
    // long: Twice the default size (8 bytes).
    unsigned long int a;

    // If a bool is assigned to an int, true becomes 1 and false becomes 0
    // If an int is assigned to a bool, 0 becomes false and any non-zero value becomes true
    bool online = false;
    bool logged_in = true;

    cout << "char: " << sizeof(char) << endl;
    cout << "bool: " << sizeof(bool) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "long long: " << sizeof(long long) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "long double: " << sizeof(long double) << endl;
    int var = 50;
    char test = 'S';
    string c = "I am learning C++";
    cout << "var: " << sizeof(var) << endl;
    cout << "test: " << sizeof(test) << endl;
    // cout << "c: " << sizeof(c) << endl;
    cout << "c: " << c.size() << endl;
    double myArr[10];
    cout << "myArr: " << sizeof(myArr) << endl;
    int numbers[100];
    cout << "numbers: " << sizeof(numbers) << endl;
    cout << "numbers[0]: " << sizeof(numbers[0]) << endl;
    cout << "numbers/numbers[0]: " << sizeof(numbers) / sizeof(numbers[0]) << endl;
    // char: 1
    // bool: 1
    // short: 2
    // int: 4
    // long: 4
    // long long: 8
    // float: 4
    // double: 8
    // long double: 16
    // var: 4
    // test: 1
    // c: 17
    // myArr: 80
    // numbers: 400
    // numbers[0]: 4
    // numbers/numbers[0]: 100

    int temp;
    cin >> temp;
    return 0;
}

#pragma clang diagnostic pop
