#include <stdio.h>

int main() {
    int num, i, n;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter range (up to N): ");
    scanf("%d", &n);

    printf("Multiplication Table of %d up to %d:\n", num, n);

    for (i = 1; i <= n; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}