//
// Created by ASUS on 11/22/2021.
//

#include <iostream>

#include "Stack.h"

int main() {
    Stack *stack;
    stack = new Stack();

    stack->pop();
    stack->getTop();

    int i = 10;
    while (!stack->isFull()) {
        stack->push(i);
        stack->getTop();
        i += 10;
    }
    stack->push(50);

    while (!stack->isEmpty()) {
        stack->pop();
        stack->getTop();
    }
    stack->pop();

    return 0;
}
