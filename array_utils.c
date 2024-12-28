#include "array_utils.h"

void inputArraySize(int* n) {
    // printf("Enter the number of elements: ");
    scanf("%d", n);
    if (*n <= 0) {
        printf("Number of elements cannot be <= 0.\n");
        exit(1);
    }
}

void allocateMemory(int** ptr, int n) {
    *ptr = (int*)malloc(n * sizeof(int));
    if (*ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(1);
    }
}

void inputArrayElements(int* ptr, int n) {
    // printf("Enter the elements of the array: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &ptr[i]);
    }
}
