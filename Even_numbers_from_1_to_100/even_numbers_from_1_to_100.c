/* program to print even number from 1 to 100 */
#include <stdio.h>

int main() {
    printf("Even numbers from 1 to 100 are ------------\n\n");
    for(int i=1;i<=100;i++) {
        if(i%2==0) {
            printf("%4d", i);
        }
    }
    return 0;
}
