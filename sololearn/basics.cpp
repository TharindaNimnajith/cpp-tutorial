//
// Created by ASUS on 11/10/2021.
//

// iostream stands for standard input-output stream
#include <iostream>
// https://www.quora.com/What-is-the-difference-between-cstdio-and-stdio-h
// https://stackoverflow.com/questions/28764438/what-the-difference-between-stdio-h-and-iostream
// https://stackoverflow.com/questions/17290144/stdio-vs-iostream
// https://stackoverflow.com/questions/2872543/printf-vs-cout-in-c
// #include <cstdio>
// #include <stdio.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "UnusedValue"

using namespace std;

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

    return 0;
}

#pragma clang diagnostic pop
