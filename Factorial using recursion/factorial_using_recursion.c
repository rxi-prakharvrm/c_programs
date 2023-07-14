// program to find the factorial of a number using recursion

#include <stdio.h>

int factorial(int n) {
    if(n == 0)
        return 1;
    return n * factorial(n-1);
}

int main() {
    int num, f;
    printf("Enter a number: ");
    scanf("%d", &num);

    f = factorial(num);
    printf("%d", f);

    return 0;
}
