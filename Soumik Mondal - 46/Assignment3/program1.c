#include <stdio.h>
#include<string.h>
struct student {
    char firstName[50];
    int roll;
    float mark1,mark2,mark3,mark4,mark5,avg,total;
} s[100];

int main() {
    int i,n,j,k;
    char name[100];
    printf("Enter the no of students: ");
    scanf("%d",&n);
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < n; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].mark1);
        scanf("%f", &s[i].mark2);
        scanf("%f", &s[i].mark3);
        scanf("%f", &s[i].mark4);
        scanf("%f", &s[i].mark5);
        s[i].avg=(s[i].mark1+s[i].mark2+s[i].mark3+s[i].mark4+s[i].mark5)/5;
        s[i].total=s[i].mark1+s[i].mark2+s[i].mark3+s[i].mark4+s[i].mark5;
    }
    printf("Displaying Information:\n\n");
    for(i=0;i<n;i++){
    	for(j=0;j<n-i-1;j++){
    		if(s[j].total>s[j+1].total){
    		strcpy(name,s[j].firstName);
			strcpy(s[j].firstName,s[j+1].firstName);
			strcpy(s[j+1].firstName,name);
			k=s[j].total;
			s[j].total=s[j+1].total;
			s[j+1].total=k;
			k=s[j].avg;
			s[j].avg=s[j+1].avg;
			s[j+1].avg=k;
			}
		}
	}
    // displaying information
    for (i = 0; i < n; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Total: %.1f", s[i].total);
        printf("\n");
        printf("Average: %.1f", s[i].avg);
    }
    return 0;
}
