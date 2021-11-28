//
// Created by ASUS on 11/23/2021.
//

#include "SortingAlgorithms.h"

int main() {
    SortingAlgorithms *sortingAlgorithms;
    sortingAlgorithms = new SortingAlgorithms();
    std::vector<int> myNumbers = {30, 10, 45, 32, 1, 60};
    sortingAlgorithms->bubbleSort(myNumbers);
    sortingAlgorithms->quickSort(myNumbers);
    return 0;
}
