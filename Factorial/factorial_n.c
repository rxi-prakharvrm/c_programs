#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
    int n,factorial;
    printf("Enter a number: ");
    scanf("%d",&n);
    factorial = fact(n);
    printf("Factorial of %d is: %d",n, factorial);
    getch();
}
int fact(int n)
{
    if(n==0)
        return 1;
    return (n*fact(n-1));
}
