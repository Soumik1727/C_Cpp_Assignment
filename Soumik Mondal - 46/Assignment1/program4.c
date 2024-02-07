#include<stdio.h>
#include<string.h>

void print(char c[][20]){
    for(int i=0; i<100; i++)
        printf("%2d = %s\n", i, c[i] );
}
void indian(int , char[][20]);
void international(int , char[][20]);

int main(){
    char c[100][20]
    = {"","one","two","three","four","five","six","seven","eight","nine","ten",
            "eleven","twelve","thirteen","fourteen","fifteen"};
    strcpy(c[20], "twenty");
    strcpy(c[30], "thirty");
    strcpy(c[50], "fifty");
    int i, num;
    for(i=16; i<100; i++){
        if(i==20 || i==30 || i==50){
            continue;
        }
        if(i/10 == 1){
            strcpy(c[i], c[i%10]);
            strcat(c[i], "teen");
        }
        else if(i%10 == 0){
            strcpy(c[i], c[i/10]);
            strcat(c[i], "ty");
        }
        else{
            strcpy(c[i],c[(i/10)*10]);
            strcat(c[i]," ");
            strcat(c[i],c[i%10]);
        }
    }
    // print(c);
    printf("Enter the 8-digit number : ");
    scanf("%d",&num);
    indian(num, c);
    international(num, c);
    return 0;
}

void indian(int num, char c[][20]){
    int cr, lk, th, hn;
    printf("\nIndian : ");
    cr = num/10000000;
    if(cr>0){
        printf("%s crore ", c[cr]);
        num -= (cr*10000000);
    }
    lk = num/100000;
    if(lk>0){
        printf("%s lakh ", c[lk]);
        num -= (lk*100000);
    }
    th = num/1000;
    if(th>0){
        printf("%s thousand ", c[th]);
        num -= (th*1000);
    }
    hn = num/100;
    if(hn>0){
        printf("%s hundred ", c[hn]);
        num -= (hn*100);
    }
    printf("%s", c[num]);
}
void international(int num, char c[][20]){
    int mil, th, hn;
    printf("\nInternational : ");
    mil = num/1000000;
    if(mil>0){
        printf("%s million ", c[mil]);
        num -= (mil*1000000);
    }
    th = num/1000;
    if(th>0){
        num -= (th*1000);
        hn=th/100;
        if(hn > 0){
            printf("%s hundred ", c[hn]);
            th -= hn*100;
        }
        printf("%s thousand ", c[th]);
    }
    if(num>0){
        hn=num/100;
        if(hn > 0){
            printf("%s hundred ", c[hn]);
            num -= hn*100;
        }
        printf("%s", c[num]);
    }
}