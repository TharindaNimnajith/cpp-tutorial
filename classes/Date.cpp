//
// Created by ASUS on 1/4/2022.
//

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
#pragma ide diagnostic ignored "modernize-use-equals-default"
#pragma ide diagnostic ignored "modernize-use-auto"
#pragma ide diagnostic ignored "readability-const-return-type"
#pragma ide diagnostic ignored "readability-make-member-function-const"

// #include <string>
#include "Date.h"

const int x = 42;

Date::Date(int year, int month, int day) : m_year(year), m_month(month), m_day(day) {
    // using initializer list is recommended over the below two methods for performance optimization

    // 01
    // m_year = year;
    // m_month = month;
    // m_day = day;

    // 02
    // setDate(int year, int month, int day);

    // for destructor demo
    // std::string *text = new std::string();
}

// const - cannot change values of the parameters
void Date::setDate(const int year, const int month, const int day) {
    // year++;  // error
    m_year = year;
    m_month = month;
    m_day = day;
}

// const - cannot change the readonly return value
const int Date::getYear() {
    return m_year;
}

// const - this method cannot change any member variables of the class
int Date::getMonth() const {
    // m_day = 0;  // error
    return m_month;
}

int Date::getDay() {
    return m_day;
}

Date::~Date() {
    // delete text;
}

#pragma clang diagnostic pop
