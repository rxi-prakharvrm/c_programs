// program to print all the prime numbers from 1 to 100

#include <stdio.h>

int main() {
    int i = 1, n = 1, count = 0;
    while(n <= 100) {
         while(i <= n) {
            if(n%i == 0)
                count++;
            i++;
         }
         if(count == 2) {
            printf("%d\t", n);
         }
         count = 0;
         i = 1;
         n++;
    }
    return 0;
}
