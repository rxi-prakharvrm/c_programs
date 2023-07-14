#include<stdio.h>

int main()
{
    char str[]="Prakhar Verma";
    int i,j,temp,n;

    //loop to recognize and remove same letters from the string

    n = strlen(str);

    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(str[i] == str[j])
            {
                temp = j;
                while(j < n-1)
                {
                    str[j] = str[j+1];
                    j++;
                }
                j = temp;
                n--;
            }
            else
                continue;
        }
    }
    printf("After removing the same letters from the string, the string is: ");
    for(i = 0; i < n; i++)
    {
        printf("%c",str[i]);
    }

    return 0;
}
