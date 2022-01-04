//
// Created by ASUS on 11/21/2021.
//

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

#ifndef CPP_TUTORIAL_C_H
#define CPP_TUTORIAL_C_H


#include "A.h"

class C : public A {

protected:

    int z;


public:

    C();

    ~C();

    void run() override;
};


#endif //CPP_TUTORIAL_C_H

#pragma clang diagnostic pop
