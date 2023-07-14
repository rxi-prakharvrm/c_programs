/* program to delete a number from array if found and replace the delete
number with -1 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num_del, i, temp = 0;
    printf("Enter a number that is to be deleted: ");
    scanf("%d", &num_del);

    for(i = 0; i < 10; i++) {
        if(arr[i] == num_del) {
            arr[i] = -1;
            temp = arr[i];
        }
    }
    if(temp == 0) {
        printf("Number not found!");
    }
    else {
        for(i = 0; i < 10; i++) {
            printf("%d\t", arr[i]);
        }
    }
    return 0;
}
