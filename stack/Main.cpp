//
// Created by ASUS on 11/22/2021.
//

#include <iostream>

#include "Stack.h"

int main10() {
    Stack *stack;
    stack = new Stack();

    stack->pop();
    stack->getTop();
    stack->print();

    int i = 10;
    while (!stack->isFull()) {
        stack->push(i);
        stack->getTop();
        i += 10;
    }
    stack->push(50);
    stack->print();

    while (!stack->isEmpty()) {
        stack->pop();
        stack->getTop();
    }
    stack->pop();
    stack->print();

    return 0;
}
