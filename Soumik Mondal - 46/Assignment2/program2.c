// Program 2: Find min and max in an array

// OK

#include<stdio.h>

int findMax(int arr[],int n){
    int maximum = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > maximum){
            maximum = arr[i];
        }
    }
    return maximum;
}
int findMin(int arr[],int n){
    int minimum = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<minimum){
            minimum = arr[i];
        }
    }
    return minimum;
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
    
    // Displaying array
    printf("The array after sorting: ");
    for(int i=0; i<s; i++){
        printf("%d ",arr[i]);
    }

    int minimum = findMin(arr,s);
    int maximum = findMax(arr,s);
    printf("\nMinimum: %d",minimum);
    printf("\nMaximum: %d",maximum);
    return 0;
}