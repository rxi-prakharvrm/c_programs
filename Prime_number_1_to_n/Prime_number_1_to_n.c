/*Program to take a number from the user and check the Prime number from 1 to that number*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,n,count=0;
    printf("Enter a limit till where you want to check Prime numbers: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j == 0)
            {
                count++;
                continue;
            }
            else
            {
                continue;
            }
        }
        if(count == 2)
            printf("\n%d is a PRIME NUMBER",i);
        else
            printf("\n%d is NOT a PRIME NUMBER",i);
        count=0;
    }
    getch();
}
