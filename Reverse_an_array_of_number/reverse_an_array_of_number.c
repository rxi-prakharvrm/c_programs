/* program to reverse an integer array */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[100];
    int i, j, k, temp = 0, size, copy;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    copy = size;

    for(i=0;i<size;i++) {
        printf("\nEnter element%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(j=0;j<size;j++) {
        temp = arr[j];
        arr[j] = arr[--size];
        arr[size] = temp;
    }

    size = copy;

    for(k=0;k<size;k++) {
        printf("%d ", arr[k]);
    }
    return 0;
}
