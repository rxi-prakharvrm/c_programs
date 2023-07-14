#include <stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int del_num, check = 0;
    printf("Enter a number to be deleted: ");
    scanf("%d", &del_num);
    for (int i = 0; i < 10; i++) {
        if(arr[i] == del_num) {
            arr[i] = -1;
            check = 1;
        }
    }
    if(check == 0) {
        printf("Number not found.");
    }
    else {
        for(int i = 0; i < 10; i++) {
            printf("%-3d", arr[i]);
        }
    }
    return 0;
}