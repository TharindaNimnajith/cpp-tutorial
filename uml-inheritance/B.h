//
// Created by ASUS on 11/21/2021.
//

#ifndef CPP_TUTORIAL_B_H
#define CPP_TUTORIAL_B_H


#include "A.h"

class B : public A {

protected:

    int y;


public:

    B();

    ~B();

    void run() override;
};


#endif //CPP_TUTORIAL_B_H
