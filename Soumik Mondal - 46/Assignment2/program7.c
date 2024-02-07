// Program : Write a program to insert an element in the array such that the resultant array remain 
// sorted

// OK
#include<stdio.h>

void addElement(int arr[],int n){
    int i;
    printf("Enter the key: ");
    int item;
    scanf("%d",&item);

    i = n-1;
    while(item<arr[i] && i>=0){
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = item;
    n++;

    printf("\nAfter insertion array is : ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}


int main(){

    printf("Enter the sie of your array: ");
    int n;
    scanf("%d",&n);
    int capacity = n+1 ;
    int arr[capacity];

    printf("Enter elements:");
    for( int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    addElement(arr,n);

    return 0;
}