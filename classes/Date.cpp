//
// Created by ASUS on 1/4/2022.
//

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
#pragma ide diagnostic ignored "modernize-use-equals-default"
#pragma ide diagnostic ignored "modernize-use-auto"
#pragma ide diagnostic ignored "readability-make-member-function-const"
#pragma clang diagnostic ignored "-Wunknown-pragmas"

// #include <string>
#include "Date.h"

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

void Date::setDate(int year, int month, int day) {
    m_year = year;
    m_month = month;
    m_day = day;
}

int Date::getYear() {
    return m_year;
}

int Date::getMonth() {
    return m_month;
}

int Date::getDay() {
    return m_day;
}

Date::~Date() {
    // delete text;
}

#pragma clang diagnostic pop
