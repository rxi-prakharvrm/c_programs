// program to sort an array using selection sort algo

#include <stdio.h>

int main() {
    int arr[] = {64, 12, 34, 69, 45, 56}, i, j, size, temp;
    size = sizeof(arr)/sizeof(arr[0]);
    for(i = 0; i < size; i++) {
        for(j = i+1; j < size; j++) {
            if(arr[j] <= arr[i]) {
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
