#include <stdio.h>

int main() {
    int i, count = 0;
    printf("Numbers divisible by 11 are as follows------\n\n");
    for(i = 1; i <= 100; i++) {
        if(i%11 == 0) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTotal numbers between 1 and 100 that are divisible by 11 are: %d\n", count);
    return 0;
}
