#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,set[20],n;
    printf("\nEnter how many elements you want in this set: ");
    scanf("%d",&n);

    /* take input of a set to user */

    for(i=0;i<n;i++)
    {
        printf("Enter the element no. %d: ",i+1);
        scanf("%d",&set[i]);
    }

    /* print entered set */

    printf("\nSet entered by you is: ");
    printf("{");
    for(i=0;i<n;i++)
    {
        printf(" %d,",set[i]);
    }
    printf("\b }");
    printf("\n\n");

    /* print all the subsets related to entered set */

    printf("All subsets related to entered set are: \n");
    printf("{},");
    for(i=0;i<1;i++)
    {
        printf(" {%d}",set[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            printf(",");
            printf(" { ");
            printf("%d , %d",set[i],set[j]);
            printf(" }");
        }
    }
    printf(" { ");
    for(i=0;i<n;i++)
    {
        printf(" %d,",set[i]);
    }
    printf("\b }");
    printf("\n\n");
    getch();
}
