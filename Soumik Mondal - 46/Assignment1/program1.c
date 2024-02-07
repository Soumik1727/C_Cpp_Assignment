        // Convert Temparature          // OK
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

    float centigradeToFahrenheit(float c){
        return (((9*c)/5)+32);
    }

    float fahrenheitToCentigrade(float f){
        return (((f-32)*5)/9);
    }

int main(){
    int ch;
    do{
        printf("\n========MENU========");
        printf("\n1: Centigrade to Fahrenheit: ");
        printf("\n2: Fahrenheit to Centigrade: ");
        printf("\n0: Exit: ");

        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
                // Centigrade to Fahrenheit
            case 1: printf("Enter temparature in Centigrade: ");
                float c;
                scanf("%f",&c);
                float ans = centigradeToFahrenheit(c);
                printf("\n%.2f Centigrade = %.3f Fahrenheit.\n",c,ans);
                    break;
                    // Fahrenheit to Centigrade
            case 2: printf("Enter temparature in Fahrenheit: ");
                float f;
                scanf("%f",&f);
                float ans2 = fahrenheitToCentigrade(f);
                printf("\n%.2f Fahrenheit = %.3f Centigrade.\n",f,ans2);
            
                    break; 
                    
            case 0: printf("You have exited from the program!"); exit; break;
            default:
                printf("\nPlease enter proper choice.\n");
        }
    }while(ch != 0);
    
    return 0;
}