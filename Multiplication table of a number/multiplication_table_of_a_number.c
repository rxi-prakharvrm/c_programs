// program to print the multiplication table of a number

#include <stdio.h>

int main() {
    int i = 1, num;

    // taking input for the number
    printf("Enter a number of which you want multiplication table: ");
    scanf("%d", &num);

    // printing the table
    printf("Table of %d is --------\n\n", num);
    while(i <= 10) {
        printf("%d x %d = %d\n", num, i, num*i);
        i++;
    }

    return 0;
}
