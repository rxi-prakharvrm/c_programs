// Program to adding multiple numbers

#include <stdio.h>
#include <conio.h>

void main() {
    int a[100], how_many, sum = 0, i;
    printf("How many numbers you want to add(more than 1): ");
    scanf("%d", &how_many);
    if(how_many < 2) {
        printf("Please enter more than 1.");
        exit(1);
    }
    for(i = 0; i < how_many; i++) {
        printf("Number %d = ", i+1);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Addition is: %d", sum);
    getch();
}
