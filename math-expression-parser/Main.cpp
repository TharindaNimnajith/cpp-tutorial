//
// Created by ASUS on 11/22/2021.
//

#include <iostream>

#define MAX 20

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    else
        return 0;
}

int calculate(int a, int b, char op) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        default:
            return 0;
    }
}

void evaluate(const std::string &input) {
    char arr[MAX];
    strcpy_s(arr, input.c_str());
    for (char ch: arr) {
        if (ch == '\0')
            break;
        std::cout << ch;
    }
}

int main() {
    std::string input;
    std::cout << "Enter expression:" << std::endl;
    std::cin >> input;
    evaluate(input);
    return 0;
}
