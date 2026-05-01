#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;
    int arr[100];

    // Input size
    printf("Enter number of elements (N): ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Calculate average
    avg = sum / n;

    // Output results
    printf("Sum of elements = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}