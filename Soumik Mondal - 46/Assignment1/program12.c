//   Write a program to compute an union of two sorted list of integers 
//   so that the resultant list remain sorted
//   OK

#include<stdio.h>

    void calculateUnion(int arr1[], int size1, int arr2[], int size2, int result[], int *resultSize) {
        int i = 0, j = 0, k = 0;

        while (i < size1 && j < size2) {
            if (arr1[i] < arr2[j]) {
                result[k++] = arr1[i++];
            } else if (arr2[j] < arr1[i]) {
                result[k++] = arr2[j++];
            } else {
                                // If both elements are equal
                result[k++] = arr1[i++];
                j++;
            }
        }
                        // Copy the remaining elements from the first array
        while (i < size1) {
            result[k++] = arr1[i++];
        }
                        // Copy the remaining elements from the second array
        while (j < size2) {
            result[k++] = arr2[j++];
        }

        *resultSize = k;
    }

int main(){

    int arr1[] = {4,8,9,22,35,43};
    int arr2[] = {1,3,4,6,25,75,77,99};

    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);

    int result[size1 + size2];
    int resultSize;

    calculateUnion(arr1, size1, arr2, size2, result, &resultSize);
                // Displaying the final array
    printf("Union of the two sorted lists: ");
    for (int i = 0; i < resultSize; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}