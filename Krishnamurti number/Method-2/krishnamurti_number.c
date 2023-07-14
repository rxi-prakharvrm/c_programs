// program to find krishnamurti number

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, copy_num, fact, rem, sum = 0, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    copy_num = num;
    while(num > 0) {
        fact = 1;
        rem = num % 10;
        for(i = 1; i <= rem; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
        num /= 10;
    }
    if(sum == copy_num) {
        printf("Krishnamurti");
    }
    else {
        printf("Not Krishnamurti");
    }
    return 0;
}
