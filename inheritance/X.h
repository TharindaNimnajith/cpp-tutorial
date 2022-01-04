//
// Created by ASUS on 1/4/2022.
//

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

#ifndef CPP_TUTORIAL_X_H
#define CPP_TUTORIAL_X_H


class X {

private:


protected:


public:

    X();

    virtual void bar();

    virtual void qux();

    // if a class has at least one method with no implementation it is an interface
    // derived class must implement this method
    virtual void run() = 0;

    // base class destructor should be virtual
    virtual ~X();

};


#endif //CPP_TUTORIAL_X_H

#pragma clang diagnostic pop
