// GCD using Euclidean Algorithm
                                        //OK
#include<stdio.h>

    int calculateGcd(int a,int b){
        int rem = 0;
        while(b!=0){
            rem = a%b;
            a = b;
            b = rem;
        }
        return a;
    }

    // GCD using Prime Factorization method
    int primeFactorizationMethod(int a,int b){

        while (a != b) {
            if (a > b) {
                a = a - b;
            } else {
                b = b - a;
            }
        }
        return a;
    }

int main(){
    int n1,n2;
    printf("Enter a number: ");
    scanf("%d",&n1);
    printf("Enter another number: ");
    scanf("%d",&n2);
                // For calling Euclidean method
    if( n1 >0 && n2>0 && n1>n2){
        int ans = calculateGcd(n1,n2);
        printf("The GCD of (%d,%d) is: %d",n1,n2,ans);
    }
    else if( n1 >0 && n2>0 && n1<n2){
        int ans = calculateGcd(n2,n1);
        printf("The GCD of (%d,%d) is: %d",n1,n2,ans);

    }
    else{
        printf("Please give proper input.");
    }
                // For calling Prime factorization method
    printf("\nOutput using Prime factorization method.");
    int result = primeFactorizationMethod(n1,n2);
    printf("\nThe GCD of (%d,%d) is: %d",n1,n2,result);

    return 0;
}