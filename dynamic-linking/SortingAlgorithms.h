//
// Created by ASUS on 11/29/2021.
//

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "OCUnusedStructInspection"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

#ifndef CPP_TUTORIAL_SORTINGALGORITHMS_H
#define CPP_TUTORIAL_SORTINGALGORITHMS_H


#include <iostream>
#include <vector>

class SortingAlgorithms {

private:

    static void swap(int *a, int *b);

    static int partition(std::vector<int> &toSort, int low, int high);

    static void print(std::vector<int> &toSort);


public:

    SortingAlgorithms();

    void bubbleSort(std::vector<int> &toSort, int n);

    void quickSort(std::vector<int> &toSort, int low, int high);

    ~SortingAlgorithms();
};


#endif //CPP_TUTORIAL_SORTINGALGORITHMS_H

#pragma clang diagnostic pop
