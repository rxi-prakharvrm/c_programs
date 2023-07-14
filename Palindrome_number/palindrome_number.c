/* program to check whether a number is palindrome or not */

#include<stdio.h>

int main() {
    int num, lastdigit, temp;
    int count = 0, palindrome = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(num > 0) {
        lastdigit = num%10;
        palindrome = palindrome * 10 + lastdigit;
        num /= 10;
    }
    num = temp;
    if(num == palindrome) {
        printf("%d is a palindrome number.", num);
    }
    else {
        printf("%d is not a palindrome number.", num);
    }
    return 0;
}
