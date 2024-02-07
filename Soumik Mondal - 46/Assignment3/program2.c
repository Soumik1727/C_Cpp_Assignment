#include<stdio.h>
int main()
{
	int hour1,hour2,min1,min2,sec1,sec2,a,b,sec3,hour3,min3;
	printf("Enter the first time: \n");
	scanf("%d %d %d",&hour1,&min1,&sec1);
	printf("Enter the second time: \n");
	scanf("%d %d %d",&hour2,&min2,&sec2);
	sec3=sec1+sec2;
	a=sec3;
	if(a>=60){
		sec3=a%60;
		min3=a/60;
	}
	min3=min3+min2+min1;
	b=min3;
	if(b>=60){
		min3=b%60;
		hour3=b/60;
	}
	hour3=hour3+hour2+hour1;
	printf("The Added time is %d hours ::%d mins ::%d secs",hour3,min3,sec3);
	return 0;
}
