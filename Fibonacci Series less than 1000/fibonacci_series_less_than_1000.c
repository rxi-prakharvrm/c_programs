// program to print fibonacci series less than and equals to 1000.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 0, b = 1, n = 2, c = 0;
    printf("%d\t%d\t", a, b);
    while(c <= 1000) {
        c = a + b;
        a = b;
        b = c;
        if(c <= 1000) {
            printf("%d\t", c);
        }
    }
    return 0;
}
























