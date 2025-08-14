#include <stdio.h>

#define SIZE 7

int main() {
    int arr[SIZE][SIZE] = {0};

    // Generate Pascal's Triangle
    for (int i = 0; i < SIZE; i++) {
        arr[i][0] = 1;  // First element of each row is 1
        for (int j = 1; j <= i; j++) {
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }

    // Print Pascal's Triangle
    for (int i = 0; i < SIZE; i++) {
        // Print spaces for formatting
        for (int s = 0; s < SIZE - i - 1; s++)
            printf("  ");

        // Print row
        for (int j = 0; j <= i; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
