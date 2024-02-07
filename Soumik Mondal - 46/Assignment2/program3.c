// Program 3: Mean,Mode , standerd deviation of numbers
// OK

#include<stdio.h>
#include<math.h>
                // Calculating mean
    float mean(int arr[],int n){
        float sum = 0.00;
        for(int i=0; i<n; i++){
            sum = sum + arr[i];
        }
        printf("\nSum:%f",sum);
        return (sum/n);
    }
                // Calculating mode
    int mode(int arr[],int n){
        int maxValue = 0,maxCount = 0;
        for(int i=0; i<n; i++){
            int count = 0;
            for(int j =0; j<n; j++){
                if(arr[j] == arr[i]){
                    count++;
                }
                if(count > maxCount){
                    maxCount = count ;
                    maxValue = arr[i];
                }
            }
        }
        return maxValue;
    }

    float standardDeviation(int arr[], int n) {
        float meanValue = mean(arr, n);
        float sumOfSquaredDifferences = 0.0;

        for (int i = 0; i < n; i++) {
            sumOfSquaredDifferences += pow(arr[i] - meanValue, 2);
        }

        float variance = sumOfSquaredDifferences / n;
        float stdDeviation = sqrt(variance);

        return stdDeviation;
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
    printf("Numbers: ");
    for(int i=0; i<s; i++){
        printf("%d ",arr[i]);
    }
    
    float m = mean(arr,s);   // calling mean
    printf("\nMean: %f",m);

    int mode1 = mode(arr,s);  // calling mode
    printf("\nMode: %d",mode1);

    float stdDev = standardDeviation(arr, s);
    printf("\nStandard Deviation: %f", stdDev);

    return 0;
}