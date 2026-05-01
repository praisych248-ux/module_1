#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];

    // Input strings
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Concatenate strings
    strcat(str1, str2);

    // Display result
    printf("Concatenated String = %s\n", str1);

    // Find length
    printf("Length = %lu", strlen(str1));

    return 0;
}