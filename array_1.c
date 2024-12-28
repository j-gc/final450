// Reverse an array
// Time complexity - O(n)
// Space complexity - O(1)
//

#include <stdio.h>
#include <stdlib.h>


void display(int *ptr, int n);
void reverseArray(int *start, int *end);

int main()
{
	int n = 0;
	scanf("%d", &n);
	if(n<=0) {
		printf("Number of elements cannot be <= 0.\n");
		exit(1);	
	}

	int* ptr = (int*)malloc(n * sizeof(int));
	if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(1);
    }


	for (int i = 0; i < n; ++i) {
		scanf("%d", &ptr[i]);
	}
	// Get start and end memory addresses
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
    // Print the start and end memory addresses
    // printf("Start memory address: %p\n", (void*)start);
    // printf("End memory address: %p\n", (void*)end);
    // Reverse the array using the swap function
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