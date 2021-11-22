//
// Created by ASUS on 11/22/2021.
//

#include <iostream>

#include "Stack.h"

Stack::Stack() {
    Stack::top = -1;
    Stack::stack[MAX] = {};
}

bool Stack::push(int x) {
    if (Stack::isFull())
        return false;
    else
        Stack::stack[++top] = x;
    return true;
}

int Stack::pop() {
    if (Stack::isEmpty())
        return 0;
    else
        return Stack::stack[top--];
}

void Stack::getTop() const {
    std::cout << Stack::stack[Stack::top] << std::endl;
}

void Stack::print() {
    std::cout << Stack::stack << std::endl;
}

bool Stack::isEmpty() const {
    if (Stack::top < 0) {
        std::cout << "Stack is Empty" << std::endl;
        return true;
    }
    return false;
}

bool Stack::isFull() const {
    if (Stack::top >= (MAX - 1)) {
        std::cout << "Stack is Full" << std::endl;
        return true;
    }
    return false;
}

Stack::~Stack() {
    std::cout << "Stack Destructor" << std::endl;
}
