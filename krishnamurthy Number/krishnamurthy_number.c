/* program to find out krishnamurthy number */

#include <stdio.h>

// function to find factorial of lastdigit one-by-one
int fact(int lastdigit) {
    int f=1;
    for(int i = 1; i <= lastdigit; i++) {
        f = f*i;
    }
    return f;
}

//main function
int main()
{
    int n, lastdigit, krishnamurthy = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int copy = n;
    while(n>0) {
        lastdigit = n%10;   //getting last digit of n
        krishnamurthy = krishnamurthy + fact(lastdigit);    //adding 'krishnamurthy' with the factorial of last digit of n
        n = n/10;
    }
    if(copy == krishnamurthy) { //comparing whether the addition of each digit factorial is equals to n(copy)
        printf("\nThis is a Krishnamurthy number.\n");
    }
    else{
        printf("\nThis is not a Krishnamurthy number.\n");
    }
    return 0;
}
