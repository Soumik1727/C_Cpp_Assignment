#include<stdio.h>
                // Number of minimum notes to pay a amount    // OK
int main(){
    printf("Enter a amount: ");
    int amount;
    scanf("%d",&amount);

    int ten = 10;
    int twenty = 20;
    int fifty = 50;
    int hundred = 100;

    int tenCount = 0,twentyCount = 0,fiftyCount = 0,hundredCount = 0;

    while( amount ){
        if(amount>=100){
            amount -= 100;
            hundredCount++;
        }
        else if(amount >= 50){
            amount -= 50;
            fiftyCount++;
        }
        else if(amount >=20){
            amount -= 20;
            twentyCount++;
        }
        else if(amount >= 10){
            amount -= 10;
            tenCount++;
        }
        else{
            printf("Bank can't pay: %d rupees.",amount);
            amount = amount - amount;
        }
    }

    int sum = hundredCount + fiftyCount + twentyCount + tenCount ;
    printf("\nMinimum no of note reuired is: %d",sum);
    
    return 0;
}