//
// Created by ASUS on 1/4/2022.
//

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

#include <iostream>

union UnionJob {
    char name[16];  // 16 bytes (1 bytes * 16)
    float salary;  // 4 bytes
    int workerNo;  // 4 bytes
};

struct StructJob {
    char name[16];  // 16 bytes (1 bytes * 16)
    float salary;  // 4 bytes
    int workerNo;  // 4 bytes
};

int main() {
    printf("Size of union: %d bytes\n", sizeof(UnionJob));  // 16 (max size of the attributes)
    printf("Size of struct: %d bytes\n", sizeof(StructJob));  // 24 (sum size of the attributes)

    UnionJob unionJob{};
    unionJob.salary = 300000.56;
    unionJob.workerNo = 56;

    return 0;
}

#pragma clang diagnostic pop
