// program to find palindrome number

#include <stdio.h>

int main() {
    int num, palindrome = 0, copy_num, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    copy_num = num;
    while(num > 0) {
        rem = num % 10;
        palindrome = palindrome * 10 + rem;
        num /= 10;
    }
    if(copy_num == palindrome)
        printf("%d is a palindrome number.", copy_num);
    else
        printf("%d is not a palindrome number.", copy_num);
        return 0;
}
