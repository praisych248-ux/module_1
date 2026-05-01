#include <stdio.h>

int main() {
    int marks;

    // Input
    printf("Enter marks: ");
    scanf("%d", &marks);

    // Decision making
    if (marks > 90) {
        printf("Grade A");
    } 
    else if (marks > 75) {
        printf("Grade B");
    } 
    else if (marks > 50) {
        printf("Grade C");
    } 
    else {
        printf("Grade D");
    }

    return 0;
}