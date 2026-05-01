#include <stdio.h>

int main() {
    // -------- 1D Array --------
    int arr[5];

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nElements of 1D array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    // -------- 2D Array --------
    int matrix[3][3];
    int sum = 0;

    printf("\n\nEnter elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j];   // calculate sum
        }
        printf("\n");
    }

    printf("\nSum of all elements = %d", sum);

    return 0;
}