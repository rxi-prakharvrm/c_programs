/* program to find the sum to lower triangular elements of a matrix */

#include <stdio.h>

int main() {
    int mat[3][3], sum = 0;
    int i, j;
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("Enter mat[%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            if(i > j) {
                sum += mat[i][j];
            }
        }
    }
    printf("\nSum of lower triangular elements of matrix mat is: %d\n", sum);
    return 0;
}
