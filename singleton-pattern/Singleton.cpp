//
// Created by ASUS on 11/21/2021.
//

#include "Singleton.h"

Singleton *Singleton::instance = nullptr;

Singleton *Singleton::getInstance() {
    if (instance == nullptr)
        instance = new Singleton();
    return instance;
}

Singleton::Singleton() = default;
