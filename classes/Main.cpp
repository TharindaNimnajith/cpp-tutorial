//
// Created by ASUS on 1/4/2022.
//

#include <iostream>

#include "Date.h"

int main() {
    Date d(2022, 1, 4);
    std::cout << "Year: " << d.getYear() << std::endl;
    std::cout << "Month: " << d.getMonth() << std::endl;
    std::cout << "Day: " << d.getDay() << std::endl;
    return 0;
}
