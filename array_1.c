// Reverse an array
// Time complexity - O(n)
// Space complexity - O(1)
//

#include <stdio.h>
#include <stdlib.h>
#include "array_utils.h"

void display(int *ptr, int n);
void reverseArray(int *start, int *end);

int main()
{
	int n = 0;
	int* ptr = NULL;
	
	inputArraySize(&n);
	allocateMemory(&ptr, n);
	inputArrayElements(ptr, n);

    int *start = ptr;
    int *end = ptr + n - 1;
	reverseArray(start, end);
	display(ptr, n);
	free(ptr);
	return 0;
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp; 
}

void reverseArray(int *start, int *end)
{
    while (start < end) {
        swap(start, end); // Swap elements
        start++;
        end--;
    }
}

void display(int *ptr, int n)
{
	for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
	printf("\n");
}