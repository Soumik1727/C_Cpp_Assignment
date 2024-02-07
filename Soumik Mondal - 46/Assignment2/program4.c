// Program 4: Swap even position number with odd position number 
//OK

#include<stdio.h>

void swapArray(int arr[],int n){
    int i=0;
    int j =1;
    while(i<n && j<n){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i += 2;
        j += 2;
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
                        // Displaying array
    printf("The array before swapping: ");
    for(int i=0; i<s; i++){
        printf("%d ",arr[i]);
    }
    swapArray(arr,s);
                        // Displaying array
    printf("\nThe array after swapping: ");
    for(int i=0; i<s; i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}