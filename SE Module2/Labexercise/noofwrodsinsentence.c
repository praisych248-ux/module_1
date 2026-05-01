#include <stdio.h>

int main() {
    char str[200];
    int i, count = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);   // takes full sentence with spaces

    for (i = 0; str[i] != '\0'; i++) {
        // Count word when space is found followed by a character
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            count++;
        }
    }

    // Words = spaces + 1 (if sentence is not empty)
    if (str[0] != '\0')
        count = count + 1;

    printf("Number of words = %d", count);

    return 0;
}