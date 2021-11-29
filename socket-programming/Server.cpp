//
// Created by ASUS on 11/29/2021.
//

#include <iostream>
#include <chrono>

#include "date.h"

void getDateTime() {
    std::string s = date::format("%F %T", std::chrono::system_clock::now());
    std::cout << s << std::endl;
}
