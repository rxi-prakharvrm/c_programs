// program to find even number from 1 to 100

#include <stdio.h>

int main() {
    int num = 1;
    printf("Even number from 1 to 100 are -------------\n\n");
    while(num <= 100) {
        if(num % 2 == 0) {
            printf("%d ", num);
        }
        num++;
    }
    return 0;
}
