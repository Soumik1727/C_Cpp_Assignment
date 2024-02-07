/*    W.A.P. to generate the Pascal’s triangle:--
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1…..upto 10 lines  */


#include <stdio.h>

    int binomialCoeff(int n, int k);
    void printPascal(int n){
        
        for (int line = 0; line < n; line++){

            for (int i = 0; i <= line; i++){
                printf("%d ",binomialCoeff(line, i));
            }
            printf("\n");
        }
    }
    int binomialCoeff(int n, int k){
        int res = 1;
        if (k > n - k)
        k = n - k;
        for (int i = 0; i < k; ++i){
            res *= (n - i);
            res /= (i + 1);
        }
        
        return res;
    }

int main(){
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    if(n>10 || n<0){
        printf("\nPlease enter a number between 1 to 10!");
    }
    else{
        printPascal(n);
    }

    return 0;
}