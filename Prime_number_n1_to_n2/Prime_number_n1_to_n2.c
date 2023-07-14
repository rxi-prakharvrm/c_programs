/*Program to check Whether a number is prime or not between a limit entered by user*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n1,n2,count=0;
    printf("Specify the limit to check Prime number between them: ");
    scanf("%d %d",&n1,&n2);
    printf("\nPrime numbers between %d and %d are----------\n", n1, n2);
    for(n1;n1<=n2;n1++)
    {
        for(i=1;i<=n1;i++)
        {
            if(n1%i == 0)
            {
                count++;
                continue;
            }
        }
        if(count==2)
            printf("\n%d",n1);
        count=0;
    }
    getch();
}
