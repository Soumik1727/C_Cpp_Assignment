// Program 9: Write a program to take a line of text then convert all the alphabets of it to uppercase.
// OK

#include<stdio.h>
#include<string.h>
#include<ctype.h>

            // User define function
    void makeUpperCase(char ch[300]){

        int i = 0;
        while( ch[i] != '\0'){
            if(ch[i] >= 'a' && ch[i] <= 'z') {
                ch[i] = ch[i] - 'a' + 'A';
            }
            i++;
        }
        printf("UPPER CASE: ");
        for(int i=0; i<strlen(ch) ;i++){
            printf("%c",ch[i]);
        }
    }

int main(){

    char str[300];
    char str2[300];

    printf("Enter your string: ");
    scanf("%[^\n]s",&str);


    makeUpperCase(str);

    return 0;
}