/* program to print the multiplication table of a number */
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number for which you want table: ");
    scanf("%d", &num);
    for(int i=1;i<=10;i++) {
        printf("%d * %d = %d\n", num, i, i*num);
    }
    return 0;
}
