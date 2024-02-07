// Program 13: . Write a program to take two 2-D arrays then sort those two arrays, finally store the 
// sum of them into a third array that will also be sorted.

// OK 

#include<stdio.h> 

                // Print array
    void printArray(int arr[3][3], int row, int col){
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++ ){
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }

    void sortArray(int arr[3][3],int b[9]){
        int i,j,k=0,temp; 
                        // Makeing 1D matrix
        for(i=0;i<3;i++) { 
            for(j=0;j<3;j++) {
                b[k++]=arr[i][j]; 
            }
        } 
                // Sorting using bubble sort
        for (i=0;i<9;i++) { 
            for (j=0;j<(8-i);j++) { 
                if(b[j]>b[j+1]) { 
                    temp = b[j]; 
                    b[j] = b[j+1]; 
                    b[j+1] = temp; 
                } 
            } 
        } 
    
        k=0;        // Making 2D again
        for(i=0;i<3;i++) 
        { 
            for(j=0;j<3;j++) 
            { 
                arr[i][j]=b[k]; 
                k++; 
            } 
    
        }  
    }


int main() { 
     
    int arr[3][3],b[9]; 
    int i , j;

                // User input
    printf("Enter the elements of the array:\n"); 
    for(i=0;i<3;++i) {  
	    for(j=0;j<3;++j){
            scanf("%d",&arr[i][j]);
        } 
    } 
    sortArray(arr,b);
    printf("\nAfter sorting arr: \n");
    printArray(arr,3,3);

                // User input
    int arr2[3][3],b2[9]; 
    printf("Enter the elements of the array:\n"); 
    for(i=0;i<3;++i) {  
	    for(j=0;j<3;++j){
            scanf("%d",&arr2[i][j]);
        } 
    } 
    sortArray(arr2,b2);
    printf("\nAfter sorting arr2: \n");
    printArray(arr2,3,3);

    int result[3][3];

    for(int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            result[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    
    printf("\nResultant array after sum: \n");
    printArray(result, 3, 3);
    return 0;
 
} 