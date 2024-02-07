// Program 11: Write a program to find transpose of matrix.
// OK

#include<stdio.h>
#include<limits.h>

void displayTranspose( int mat[3][4], int row,int col){
    printf("Transpose array displaying.\n");

    for( int i=0; i<col; i++){
        for( int j=0; j<row; j++){
            // swap(mat[i][j], mat[j][i]);
            printf("%d ",mat[j][i]) ;
        }
        printf("\n");
    }
}

int main(){
    int row=3 ;int col=4;

    int mat[3][4];
    printf("Enter elements of the matrix.\n");
    for( int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    displayTranspose(mat,row,col);

    printf("Main matrix...\n");
    for( int i=0; i<row; i++){
        for( int j=0; j<col; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}