/* program to delete element form integer array */

#include<stdio.h>

int main() {
    int arr[100], elements, delnum, copy;
    printf("Enter the elements you want in the array: ");
    scanf("%d", &elements);

    for(int i=0;i<elements;i++) {
        printf("Enter Element%d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element that you want to delete: ");
    scanf("%d", &delnum);

    for(int i=0;i<elements;i++) {
        if(arr[i] == delnum) {
            copy = i;
            while(i<elements){
                arr[i] = arr[i+1];
                i++;
            }
            i = copy;
            elements--;
        }
    }

    printf("\nAfter deleting the element, the array is -----------\n\n");

    for(int i=0;i<elements;i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
