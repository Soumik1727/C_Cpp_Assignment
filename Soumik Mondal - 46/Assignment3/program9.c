#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{
    FILE* fp, *fp1;
    char ch;
 
    fp = fopen("first.txt", "r");
    fp1 = fopen("second.txt","a");
    if(!fp){
        printf("Can not open file");
    }
    else{
        while (!feof(fp)) {
            ch = fgetc(fp);
            fputc(ch, fp1);
        }
        fclose(fp);
        fclose(fp1); 
    }
}
