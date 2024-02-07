#include<stdio.h>
#include<math.h>

                    // Prime number from 1 to N    // OK
    int checkPrime(int n){
        int square = sqrt(n);
        for( int i=2; i<=square; i++){
            if( n % i == 0){
                return 0;
            }
        }
        return 1;
    }

int main(){
    printf("Enter a number: ");
    int number;
    scanf("%d",&number);

    if( number < 2){
        printf("No prime number exist.");
    }
    else{
        printf("Prime: ");
        for( int i=2; i<=number; i++){
            int n = checkPrime(i);
            if( n != 0){
                printf("%d ",i);
            }
        }
    }
    return 0;
}