// program to swap two numbers using call by reference

#include <stdio.h>

void swap(int* a, int* b) {
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a = 10, b = 20;
    printf("Before swapping a = %d and b = %d", a, b);
    swap(&a, &b);
    printf("\nAfter swapping a = %d and b = %d", a, b);
    return 0;
}

