//Program 1: Sorting array descendingly // Bubble Sort
// OK

#include<stdio.h>

void sortArray(int arr[],int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1;j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    printf("Enter sie of the array: ");
    int s;
    scanf("%d",&s);

    int arr[s];
    printf("Enter array element: ");
    for(int i=0; i<s; i++){
        scanf("%d",&arr[i]);
    }

    sortArray(arr,s);
    
    // Displaying array
    printf("The array after sorting: ");
    for(int i=0; i<s; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}