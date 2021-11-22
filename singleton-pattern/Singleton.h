//
// Created by ASUS on 11/21/2021.
//

#include <iostream>

#ifndef CPP_TUTORIAL_SINGLETON_H
#define CPP_TUTORIAL_SINGLETON_H


class Singleton {

private:
    static Singleton *instance;

    Singleton();

public:
    static Singleton *getInstance();
};


#endif //CPP_TUTORIAL_SINGLETON_H
