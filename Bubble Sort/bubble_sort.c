// program for bubble sort

#include <stdio.h>

int main() {
    int arr[] = {23, 52, 33, 51, 45};
    int i, j, k, size, temp;
    size = sizeof(arr)/sizeof(arr[0]);
    for(k = 0; k < size; k++) {
        for(i = 0, j = i+1; i < size-1, j < size; i++, j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
