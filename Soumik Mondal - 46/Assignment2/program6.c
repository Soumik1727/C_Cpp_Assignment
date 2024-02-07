/* Program 6: Write the number of vowels & consonants of any entered line of any input string. */
// OK
#include<stdio.h>
#include<string.h>
#include<ctype.h>

    void checkAlphabet(char ch[300]){

        int vCount = 0;
        int cCount = 0;

        for( int i=0; i<strlen(ch); i++){
            if( isalpha(ch[i]) ){
                if(tolower(ch[i]) == 'a' || tolower(ch[i]) == 'e' || tolower(ch[i]) == 'i' || tolower(ch[i]) == 'o' || tolower(ch[i]) == 'u'){
                    vCount++ ;
                }
                else{
                    cCount++;
                }
            }
        }
        printf("Vowels: %d",vCount);
        printf("\nConsonants: %d",cCount);
    }
int main(){

    char str[300];

    printf("Enter your string: ");
    scanf("%[^\n]s",&str);

    checkAlphabet(str);

    return 0;
}