// program to delete an element from the array and replacing it from -1

#include <stdio.h>

int main() {
    int arr[10], i, num, change = 0;

    // input all the elements of the array
    printf("Enter all the elements of the array below -------\n\n");
    for(i = 0; i < 10; i++) {
        printf("Enter element - %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // taking a number that is to be deleted
    printf("Enter a number that is to be deleted from the array: ");
    scanf("%d", &num);

    // checking for the number and replacing it by -1
    for(i = 0; i < 10; i++) {
        if(arr[i] == num) {
            arr[i] = -1;
            change = 1;
        }
    }
    if(change == 1) {
        for(i = 0; i < 10; i++) {
            printf("%d ", arr[i]);
        }
    }
    else {
        printf("\nNumber not found in array.\n");
    }

    return 0;
}
