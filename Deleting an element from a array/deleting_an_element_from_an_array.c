// program to delete an element from the array

#include <stdio.h>

int main() {
    int arr[20], n, pos, i, j;
    printf("How many elements you want in the array: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Element-%d = ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the position from where you want to delete the element: ");
    scanf("%d", &pos);
    for(i = 0; i < n; i++) {
        if(i == pos-1) {
            for(j = i; j < n; j++) {
                arr[j] = arr[j+1];
            }
        }
    }
    n--;
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
