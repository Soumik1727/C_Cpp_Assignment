// Program 14: Write a program to take one 2-D array, find the transpose of it, finally print the 
// multiplied value of the matrix with its transpose.

// Program 10: Write a program to find norm of matrix
// Norm of matrix= square root of sum of square of all elements in the matrix.

// OK

#include<stdio.h>
int main()
{
	int row,col;

        printf("Enter the no of rows: ");
        scanf("%d",&row);
        printf("Enter the no of cols: ");
        scanf("%d",&col);
		int t[row][col];
        int arr[row][col];
        printf("Enter elements:\n");
        for( int i = 0; i < row; i++){
            for( int j = 0; j < col; j++){
                scanf("%d",&arr[i][j]);
            }
        }

         printf("Transpose Matrix\n");
        for( int i = 0; i < row; i++){
            for( int j = 0; j < col; j++){
                t[i][j]=arr[j][i];
                printf("%d\t",t[i][j]);
            }
            printf("\n");
        }
        printf("Multiplication of Original and Transpose Matrix\n");
        for( int i = 0; i < row; i++){
            for( int j = 0; j < col; j++){
            	int sum=0;
                for(int k=0;k<row;k++){
                	sum+=arr[i][k]*t[k][j];
				}
				printf("%d\t",sum);
            }
            printf("\n");
        }
       
        return 0;
}