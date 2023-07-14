// program to find the largest element in array.

#include <stdio.h>

int main() {
    int arr[] = {4, 7, 2, 9, 3, 8};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    int i;
    for(i = 0; i < arr_size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("Largest element in the array is: %d", largest);
    return 0;
}
