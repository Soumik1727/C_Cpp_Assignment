// n-th Fibonacchi number
#include <stdio.h>              //  OK
#include <math.h>
        // Using formula
float calculateFibonacci2(int n) {
    float sqrt5 = sqrt(5.0);
    float phi = (1.0 + sqrt5) / 2.0;
    float psi = (1.0 - sqrt5) / 2.0;

    float fibonacci = (pow(phi, n) - pow(psi, n)) / sqrt5;
    return fibonacci;
}
        //without formula
int calculateFibonacci(int n){
    int a = 0 ,b = 1;
    int sum = a + b;
    int count = 3; 
    
    while( count <= n){
        a = b ;
        b = sum ;
        sum = a+b; 
        count++;
    }
    return sum;
}

int main(){

    printf("Enter the a number: ");
    int n;
    scanf("%d)",&n);

    
    float result = calculateFibonacci2(n);
    printf("The %d-th Fibonacci number is: %f", n, result);

    int result2 = calculateFibonacci(n);
    printf("\nThe %d-th Fibonacci number is: %d", n, result2);

    if(result == result2){
        printf("\nSame.");
    }
    else{
        printf("\nDifferent:%f",(result - result2));
    }
    return 0;
}

