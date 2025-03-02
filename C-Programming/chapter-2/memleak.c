#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int) * 10); // Allocate memory for 10 integers

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        ptr[i] = i * 2; // Initialize array
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Memory allocated with malloc is not freed
    free(ptr); // This line is intentionally missing

    return 0;
}
