#include<stdio.h>

int avg(int [],int);

main()
{
    int a[100], n,i,avrg;
    printf("\nEnter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    avrg=avg(a,n);
    printf("\nThe average is: %d\n",avrg);
}
int avg(int a[],int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    return s/n;
}
