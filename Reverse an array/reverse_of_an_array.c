// program to reverse an array

#include <stdio.h>

int main() {
    int arr[20], n, i, j, temp;
    printf("How many elements you want in the array: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Element-%d = ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i = 0, j = n-1; i < n/2, j >= n/2; i++, j--) {
        if(i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
