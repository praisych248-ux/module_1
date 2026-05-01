#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;   // get last digit
        sum = sum + digit;  // add digit to sum
        num = num / 10;     // remove last digit
    }

    printf("Sum of digits = %d", sum);

    return 0;
}