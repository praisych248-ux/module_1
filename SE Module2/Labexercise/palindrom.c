#include <stdio.h>

// Function to check palindrome
int isPalindrome(int num) {
    int original = num;
    int reverse = 0, digit;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (original == reverse)
        return 1;
    else
        return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}