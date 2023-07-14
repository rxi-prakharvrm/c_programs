// program to print krishnamurti number between n1 and n2

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
    int i, n1, n2, remainder, is_krishnamurti = 0, copy_num;
    printf("Enter the value of n1(starting number): ");
    scanf("%d", &n1);
    printf("Enter the value of n2(ending number): ");
    scanf("%d", &n2);
    for(i = n1; i <= n2; i++) {
        copy_num = i;
        while(i > 0) {
            remainder = i % 10;
            is_krishnamurti += factorial(remainder);
            i /= 10;
        }
        if (is_krishnamurti == copy_num) {
            printf("\n--------------------------------------\n");
            printf("%d = is a krishnamurti number.", copy_num);
            printf("\n--------------------------------------\n");
        }
        i = copy_num;
        is_krishnamurti = 0;
        remainder = 0;
    }
    return 0;
}
