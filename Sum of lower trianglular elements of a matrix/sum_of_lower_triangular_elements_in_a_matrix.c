// program to find the sum of lower triangular elements in a matrix

#include <stdio.h>

int main() {
    int matrix[3][3], i, j, mat_sum = 0;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Element[%d][%d] = ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(i > j) {
                mat_sum += matrix[i][j];
            }
        }
    }
    printf("%d", mat_sum);
    return 0;
}
