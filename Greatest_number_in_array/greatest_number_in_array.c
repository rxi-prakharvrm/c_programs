// program to find the greatest number in array

#include <stdio.h>
#include <conio.h>
#define MAX 20

void main() {
    int arr[MAX], no_of_elements, largest, i;
    printf("How many elements you want to have in array:  ");
    scanf("%d", &no_of_elements);
    printf("Enter the elements of array---------\n");
    for(i = 0; i < no_of_elements; i++) {
        printf("Element %d = ", i+1);
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for(i = 1; i < no_of_elements; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("Largest number is: %d", largest);
    getch();
}
