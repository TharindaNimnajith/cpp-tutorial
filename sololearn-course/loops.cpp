//
// Created by ASUS on 11/10/2021.
//

#include <iostream>

using namespace std;

int main6() {
    int num = 1;
    int number;
    int total = 0;

    while (num <= 5) {
        cin >> number;
        total += number;
        num++;
    }

    cout << total << endl;

    for (int a = 0; a < 10; a++)
        cout << a << endl;

    for (int a = 0; a < 50; a += 10) {
        cout << a << endl;
    }

    for (int a = 10; a >= 0; a -= 3) {
        cout << a << endl;
    }

    int a = 42;

    do {
        cout << a << endl;
        a++;
    } while (a < 5);

    return 0;
}
