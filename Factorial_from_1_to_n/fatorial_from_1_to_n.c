8/* program to find factorial from 1 to n */
#include <stdio.h>
#include <conio.h>

void main()
{
    int fact = 1, n;
    printf("Enter a number from where want to get Factorial: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        fact = fact*i;
        printf("\nFactorial of %d is: %d", i, fact);
    }
    getch();
}
