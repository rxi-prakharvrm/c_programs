// find the factorial of n number where n is entered by user

#include <stdio.h>

int main() {
    int fact = 1, num;

    // taking input of a number of which the user want to find factorial
    printf("Enter a number of which you want to find factorial: ");
    scanf("%d", &num);

    // finding the factorial
    while(num > 0) {
        fact = fact * num;
        num--;
    }

    // printing the factorial
    printf("Factorial of %d is: %d", num, fact);
    return 0;
}
