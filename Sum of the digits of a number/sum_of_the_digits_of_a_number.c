// program to find the sum of the digits of a number

#include <stdio.h>

int main() {
    long int num;
    int sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num > 0) {
        rem = num % 10;
        sum = sum + rem;
        num /= 10;
    }
    printf("Sum is: %d", sum);
    return 0;
}
