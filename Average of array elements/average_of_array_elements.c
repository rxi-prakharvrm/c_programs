/* Write a function which accepts an array of size n containing integer values and returns average of
all values. Call the function from main program. */

#include <stdio.h>
#define MAX 20

int main() {
    int arr[MAX], n, i, sum = 0, average;

    // taking the size of array
    printf("Enter the size of array(<20): ");
    scanf("%d", &n);

    // taking the elements of array as input from user
    printf("Enter the elements of the array -------------\n\n");
    for(i = 0; i < n; i++) {
        printf("Enter element%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // finding the sum of all elements
    for(i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    // calculating the average of all elements
    average = sum / n;

    // printing the average of all elements
    printf("Average is: %d", average);
    return 0;
}
