// program 17: Write a program to input a line from keyboard then encode it to its next alphabet or 
// digits, then print the newly generated line

// OK
#include<stdio.h>
#include<string.h>
#include<ctype.h>

    void encodeString(char ch[300]){

        for( int i=0; i<strlen(ch); i++){
            if( isalnum(ch[i]) ){
                ch[i] += 1;
            }
        }
        for(int i=0; i<strlen(ch); i++){
            printf("%c",ch[i]);
        }
    }
int main(){

    char str[300];

    printf("Enter your string: ");
    scanf("%[^\n]s",&str);

    encodeString(str);

    return 0;
}