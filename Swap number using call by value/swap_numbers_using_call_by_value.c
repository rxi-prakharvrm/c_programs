// program to swap two number using call by value

#include <stdio.h>

void swap(int a, int b) {
    int c;
    c = a;
    a = b;
    b = c;
    printf("\nAfter swapping a = %d and b = %d", a, b);
}

int main() {
    int a = 10, b = 20;
    printf("Before swapping a = %d and b = %d", a, b);
    swap(a, b);
    return 0;
}
