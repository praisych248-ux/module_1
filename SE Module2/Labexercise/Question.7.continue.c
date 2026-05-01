#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 10; i++) {
        if(i == 3) {
            continue;   // skip 3
        }
        printf("%d ", i);
    }

    return 0;
}
