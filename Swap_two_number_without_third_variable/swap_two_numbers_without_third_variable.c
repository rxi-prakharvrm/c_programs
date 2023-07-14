/* program to swap two numbers without using third variable */

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter num1 and num2: ");
    scanf("%d %d", &num1, &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping the values of num1 and num2 are: %d and %d", num1, num2);
    return 0;
}
