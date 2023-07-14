// program to find substring from string without using library function

#include<stdio.h>

void convert(int, int);

int main(){
    char str[] = "Democratic";
    int start_pos, end_pos, i;
    printf("Enter the starting position: ");
    scanf("%d", &start_pos);
    printf("Enter the ending position: ");
    scanf("%d", &end_pos);
    for(i = start_pos-1; i <= end_pos; i++) {
        printf("%c", str[i]);
    }
    return 0;
}

