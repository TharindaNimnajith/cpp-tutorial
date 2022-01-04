//
// Created by ASUS on 11/29/2021.
//

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
#pragma ide diagnostic ignored "misc-no-recursion"
#pragma ide diagnostic ignored "readability-convert-member-functions-to-static"
#pragma clang diagnostic ignored "-Wunknown-pragmas"

#include "SortingAlgorithms.h"

SortingAlgorithms::SortingAlgorithms() = default;

void SortingAlgorithms::swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int SortingAlgorithms::partition(std::vector<int> &toSort, int low, int high) {
    int pivot = toSort[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
        if (toSort[j] <= pivot) {
            i++;
            swap(&toSort[i], &toSort[j]);
        }
    swap(&toSort[i + 1], &toSort[high]);
    return (i + 1);
}

void SortingAlgorithms::print(std::vector<int> &toSort) {
    for (int i: toSort)
        std::cout << i << " ";
    std::cout << std::endl;
}

void SortingAlgorithms::bubbleSort(std::vector<int> &toSort, int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (toSort[j] > toSort[j + 1])
                swap(&toSort[j], &toSort[j + 1]);
    print(toSort);
}

void SortingAlgorithms::quickSort(std::vector<int> &toSort, int low, int high) {
    if (low < high) {
        int pi = partition(toSort, low, high);
        quickSort(toSort, low, pi - 1);
        quickSort(toSort, pi + 1, high);
    }
    print(toSort);
}

SortingAlgorithms::~SortingAlgorithms() = default;

#pragma clang diagnostic pop
