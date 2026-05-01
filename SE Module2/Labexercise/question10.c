#include <stdio.h>

int main() {
    int a = 10;
    int *ptr;

    
    ptr = &a;

    *ptr = 25;

  
    printf("Value of a = %d\n", a);

    return 0;
}