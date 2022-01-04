//
// Created by ASUS on 1/4/2022.
//

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

#ifndef CPP_TUTORIAL_DATE_H
#define CPP_TUTORIAL_DATE_H


// default access modifier for a class is private
// default access modifier for a struct is public

class Date {

private:
    int m_year;
    int m_month;
    int m_day;

public:
    Date(int year, int month, int day);

    ~Date();  // destructor

    void setDate(int year, int month, int day);

    int getYear();

    int getMonth();

    int getDay();
};


#endif //CPP_TUTORIAL_DATE_H

#pragma clang diagnostic pop
