//
// Created by ASUS on 1/4/2022.
//

#ifndef CPP_TUTORIAL_Y_H
#define CPP_TUTORIAL_Y_H


#include "X.h"

class Y : public X {

private:


public:

    Y();

    void bar() override;

    ~Y() override;

};


#endif //CPP_TUTORIAL_Y_H
