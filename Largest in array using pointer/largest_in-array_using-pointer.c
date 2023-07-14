// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {4, 2, 7, 3, 6};
    int largest = arr[0], i;
    int *ptr = arr;
    for(i = 0; i < 5; i++) {
        if(*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }
    printf("%d", largest);
    return 0;
}
