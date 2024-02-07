struct Account{
	char name[100];
	int acno;
	float balance;
}s[100];
int main(){
	int a,b,n,d,e,j=0;
	float amount;
	printf("Enter the number of accounts in bank:\n");
	scanf("%d",&n);
	for(a=0;a<n;a++){
		printf("Enter the Name, Account No, Balance of %d: ",a+1);
		scanf("%s %d %f",s[a].name,&s[a].acno,&s[a].balance);
	}
	printf("Name and Account No of persons with balance less than 1000\n");
	for(a=0;a<n;a++){
		if(s[a].balance<1000.0)
		printf("%s  %d\n",s[a].name,s[a].acno);
	}
	while(1){
		printf("Any customer request? Press 2 if yes otherwise 3");
		scanf("%d",&b);
		if(b==2){
			printf("Enter Account Number: ");
			scanf("%d",&d);
			j=0;
			for(a=0;a<n;a++){
				if(s[a].acno==d){
					j=1;
					printf("Enter 1 for deposit and 0 for withdrawal\n");
					scanf("%d",&e);
					printf("Enter the amount:\n");
					scanf("%f",&amount);
					if(e==1){
					s[a].balance=s[a].balance+amount;
					printf("Transaction Successfull\n");
				}
					if(e==0){
						if(s[a].balance<amount)
						printf("Insufficient Balance\n");
						else{
						s[a].balance=s[a].balance-amount;
						printf("Transaction Successfull\n");
				}
			}
		}
	}
		if(j==0)
		printf("Wrong Account Number\n");
	}
	else
	break;
}
printf("Name \t Account No \t Balance\n");
for(a=0;a<n;a++){
		printf("%s \t %d \t %f\n",s[a].name,s[a].acno,s[a].balance);
	}
	return 0;
}
