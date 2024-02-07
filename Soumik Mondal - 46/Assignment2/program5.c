// Program 5: Search an element in an array
// OK

#include<stdio.h>

    int searchArray(int arr[],int n,int target){
        for(int i=0; i<n; i++){
            if(arr[i] == target){
                return i;
            }
        }
        return -1;
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

    printf("Enter your searching element: ");
    int target ;
    scanf("%d",&target);
    
    // Displaying array
    printf("The array after sorting: ");
    for(int i=0; i<s; i++){
        printf("%d ",arr[i]);
    }

    
    int index = searchArray(arr,s,target);
    if(index<0){
        printf("\nNumber is not found!");
    }
    else{
        printf("\nIndex: %d",index);
    }
    return 0;
}