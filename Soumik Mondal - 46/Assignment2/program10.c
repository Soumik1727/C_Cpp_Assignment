// Program 10: Write a program to find norm of matrix
// Norm of matrix= square root of sum of square of all elements in the matrix.

// OK

#include<stdio.h>
#include<math.h>

    double findNorm(){

        int row,col;

        printf("Enter the no of rows: ");
        scanf("%d",&row);
        printf("Enter the no of cols: ");
        scanf("%d",&col);

        int arr[row][col];
                // Taking matrix
        printf("Enter elements:\n");
        for( int i = 0; i < row; i++){
            for( int j = 0; j < col; j++){
                scanf("%d",&arr[i][j]);
            }
        }

        double sum = 0; 

        for( int i = 0; i < row; i++){
            for( int j = 0; j < col; j++){
                sum += (arr[i][j]) * ((arr[i][j])) ;
            }
        }
        return sqrt(sum);
    }


int main(){

    double ans = findNorm();

    printf("The norm of the matrix is: %lf",ans);

    return 0;
}