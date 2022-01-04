//
// Created by ASUS on 1/4/2022.
//

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "UnusedValue"
#pragma ide diagnostic ignored "UnusedLocalVariable"

int main() {
    // pointer to int
    int *a;

    // pointer to const int
    // cannot change data
    int const *b;

    // const pointer to int
    // cannot change the pointer
    int *const c = nullptr;

    // const pointer to const int
    // cannot change the pointer and the data
    int const *const d = nullptr;

    return 0;
}

#pragma clang diagnostic pop
