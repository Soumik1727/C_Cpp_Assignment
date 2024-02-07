// Write a program (W.A.P.) to take one string then print it in the reverse order and 
// check whether the input string is Palindrome.
// Ok

#include<stdio.h>
#include<string.h>
#include<ctype.h>

    // Print reverse
    void printReverse( char ch[300]){

        int end = strlen(ch) - 1;
        printf("Reverse: ");
        for( int i = end; i >= 0; i--){
                printf("%c",ch[i]);
        }
    }

    int checkPalindrome(char ch[300]){
        int start = 0;
        int end = strlen(ch) - 1;
        for( int i=0; i<strlen(ch); i++){
            if( !isalnum(ch[start]) ){    // is alphabets or numeric?
                start++; continue;
            }
            else if( !isalnum(ch[end]) ){
                start++; continue;
            }
            else{
                if( tolower( ch[start] ) != tolower( ch[end] ) ){
                    return 0;
                }
            }
        }
        return 1;
    }
int main(){

    char str[300];

    printf("Enter your string: ");
    scanf("%[^\n]s",&str);

    printReverse(str);

    int ans = checkPalindrome(str);

    if(ans == 1){
        printf("Palindrome.");
    }
    else{
        printf("Not Palindrome.");
    }

    return 0;
}