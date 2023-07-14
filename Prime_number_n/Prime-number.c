/*Program to take a number from user and check whether the number is Prime or not*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i == 0)
        {
            count++;
            continue;
        }
        else
        {
            continue;
        }
    }
    if(count==2)
        printf("Entered number is a PRIME NUMBER");
    else
        printf("Entered number is NOT  a PRIME NUMBER");
    getch();
}
