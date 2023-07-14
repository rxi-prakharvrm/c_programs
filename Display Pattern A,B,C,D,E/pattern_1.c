/* program to display following pattern

A
B B
C C C
D D D D
E E E E E

*/

#include <stdio.h>

int main() {
    int i, j;
    for(i = 0; i < 5; i++) {
        for(j = 0; j <= i; j++) {
            printf("%c ", i+65);
        }
        printf("\n");
    }
    return 0;
}
