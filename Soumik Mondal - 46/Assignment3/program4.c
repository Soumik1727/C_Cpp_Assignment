#include<stdio.h>
struct Date{
	int d,m,y;
}s[2];
int main(){
	printf("Enter the first date: ");
	scanf("%d %d %d",&s[0].d,&s[0].m,&s[0].y);
	printf("Enter the second date: ");
	scanf("%d %d %d",&s[1].d,&s[1].m,&s[1].y);
	if((s[0].d==s[1].d)&&(s[0].m==s[1].m)&&(s[0].y==s[1].y))
	printf("The Dates are Equal");
	else
	printf("The Dates are Unequal");
	return 0;
}
