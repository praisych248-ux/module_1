#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    
    fp = fopen("data.txt", "w");

    if (fp == NULL) {
        printf("Error opening file for writing");
        return 1;
    }

    printf("Enter a string: ");
    scanf(" %[^\n]", str);   

    fprintf(fp, "%s", str);
    fclose(fp);

    
    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("Error opening file for reading");
        return 1;
    }

    printf("\nContents of file:\n");
    fgets(str, 100, fp);
    printf("%s", str);

    fclose(fp);

    return 0;
}