// program to print krishnamurti number

#include <stdio.h>

int factorial(int rem) {
    int fact = 1;
    while(rem > 0) {
        fact = fact * rem;
        rem--;
    }
    return fact;
}

int main() {
    int num, remainder, is_krishnamurti = 0, copy_num;
    printf("Enter a number: ");
    scanf("%d", &num);
    copy_num = num;
    while(num > 0) {
        remainder = num % 10;
        is_krishnamurti += factorial(remainder);
        num /= 10;
    }
    if (is_krishnamurti == copy_num) {
        printf("%d is a krishnamurti number.", copy_num);
    }
    else {
        printf("%d is not a krishnamurti number.", copy_num);
    }
    return 0;
}
