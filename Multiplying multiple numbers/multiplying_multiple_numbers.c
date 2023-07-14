// Program to multiplying multiple numbers

#include <stdio.h>
#include <conio.h>

void main() {
    int a[100], how_many, mul = 1, i;
    printf("How many numbers you want to add(more than 1): ");
    scanf("%d", &how_many);
    if(how_many < 2) {
        printf("Please enter more than 1.");
        exit(1);
    }
    for(i = 0; i < how_many; i++) {
        printf("Number %d = ", i+1);
        scanf("%d", &a[i]);
        mul *= a[i];
    }
    printf("Multiplication is: %d", mul);
    getch();
}
