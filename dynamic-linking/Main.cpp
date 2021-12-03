//
// Created by ASUS on 11/23/2021.
//

#include "SortingAlgorithms.h"

int main() {
    SortingAlgorithms *sortingAlgorithms;
    sortingAlgorithms = new SortingAlgorithms();

    std::vector<int> arr = {30, 10, 45, 32, 1, 60};
    int n = arr.size();

    sortingAlgorithms->bubbleSort(arr, n);
    sortingAlgorithms->quickSort(arr, 0, n - 1);

    int temp;
    std::cin >> temp;
    return 0;
}
