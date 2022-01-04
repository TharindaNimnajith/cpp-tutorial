//
// Created by ASUS on 1/4/2022.
//

#ifndef CPP_TUTORIAL_BOX_H
#define CPP_TUTORIAL_BOX_H


class Box {

private:

    double length;

    double width;

    double height;


public:

    void setLength(double l);

    void setWidth(double w);

    void setHeight(double h);

    double getVolume() const;

    // overload + operator to add two Box objects
    Box operator+(const Box &b) const;
};


#endif //CPP_TUTORIAL_BOX_H
