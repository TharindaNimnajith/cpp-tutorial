//
// Created by ASUS on 11/10/2021.
//

#include <iostream>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "ConstantConditionsOC"
#pragma ide diagnostic ignored "UnreachableCode"
#pragma ide diagnostic ignored "Simplify"

using namespace std;

int main5() {
    int age = 18;
    if (age > 14) {
        if (age >= 18)
            cout << "Adult";
        else
            cout << "Teenager";
    } else {
        if (age > 0)
            cout << "Child";
        else
            cout << "Something's wrong";
    }

    age = 42;
    if (age == 16) {
        cout << "Too young";
    }
    if (age == 42) {
        cout << "Adult";
    }
    if (age == 70) {
        cout << "Senior";
    }

    switch (age) {
        case 16:
            cout << "Too young";
            break;
        case 42:
            cout << "Adult";
            break;
        case 70:
            cout << "Senior";
            break;
        default:
            cout << "This is the default case";
    }

    switch (age) {
        case 16:
            cout << "Too young" << endl;
        case 42:
            cout << "Adult" << endl;
        case 70:
            cout << "Senior" << endl;
        default:
            cout << "This is the default case" << endl;
    }

    age = 20;
    int grade = 80;
    if (age > 16 && age < 60 && grade > 50) {
        cout << "Accepted!" << endl;
    }

    age = 16;
    int score = 90;
    if (age > 20 || score > 50) {
        cout << "Accepted!" << endl;
    }

    age = 10;
    if (!(age > 16)) {
        cout << "Your age is less than 16" << endl;
    }

    return 0;
}

#pragma clang diagnostic pop
