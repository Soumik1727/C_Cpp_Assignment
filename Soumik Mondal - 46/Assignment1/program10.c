#include<stdio.h>
                    // Reverse a integer & Palindrome Check    
    void isPalindrome(int num){         // OK
        int temp = num;
        int rev = 0; int rem;

        while(temp != 0){
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
                // Printing the reverse-integer
        printf("Reversed of %d is %d.",num,rev);

        if( rev == num){
            printf("\nPalindrome !");
        }
        else{
            printf("\nNot Palindrome.");
        }
    }

int main(){
    printf("Enter a integer: ");
    int n;
    scanf("%d",&n);

    isPalindrome(n);

    return 0;
}