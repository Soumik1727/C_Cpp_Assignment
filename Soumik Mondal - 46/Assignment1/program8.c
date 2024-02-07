#include<stdio.h>
#include<stdlib.h>
#include<math.h>
                    /*      Write a program to compute following series
                            A. 1/1!+2/2!+3/3!+…..upto 10 terms.
                            B. Sine(x)
                            C. Cos(x)
                            D. Log(1+x)                           OK    */
#define PI 3.1415
#define acc 30

    float calculateSeries(float num){
        float temp = 1;
        float a = 1;
        for(int i=1; i<=acc; i++){
            temp = (temp*num)/i;
            a = a + temp;
        }
        return a;
    }
    float calculateSine(float rad){
        float a2 = 0;
        float t2 =rad ;
        for(int i=3;i<=acc;i+=2){
            a2 = a2 + t2;
            t2 = t2 *(-1)*(rad*rad)/((i-1)*i);
        }
        return a2;
    }
    float calculateCos(float n3){
        float temp = 1;
        float ans = 1;
        for(int i=1; i<=acc; i+=2){
            temp = temp * (-1) *n3*n3/(i*(i+1));
            ans = ans + temp;
        }
        return ans;
    }
                    //  x - (x^2)/2 + (x^3)/3 - (x^4)/4 + ...
    double calculateLog(double x, int terms) {
        double result = 0.0;
        int sign = 1;

        for (int n = 1; n <= terms; ++n) {
            // double term = pow(-1, n - 1) * pow(x, n) / n;
            double term = sign * (pow(x,n)/n) ;
            sign *= -1;
            result += term;
        }

        return result;
    }

int main(){
    int ch;
    do{
        printf("\n========MENU========");
        printf("\n1: 1/1!+2/2!+3/3!+...upto 10 terms: ");
        printf("\n2: Sine(x): ");
        printf("\n3: Cos(x): ");
        printf("\n4: Log(1+x): ");
        printf("\n0: Exit: ");

        printf("\nEnter your choice: ");
        scanf("%d",&ch);

                switch(ch)
        {
            // e^x             //  1 + (x)/1! + (x^2)/2! + (x^3)/3! + (x^4)/4!...
            case 1:
                printf("Enter a number: ");
                float n1;
                scanf("%f",&n1);
                float ans = calculateSeries(n1);
                printf("\ne to the power %f is: %f",n1,ans);

                    break;
            case 2:     // Sine value               // x - (x^3)/3! + (x^5)/5! - (x^7)/7! + ...
                printf("Enter angle(in degree): ");
                float n2;
                scanf("%f",&n2);
                float rad = n2*(PI/180);
                float ans2 = calculateSine(rad);
                printf("\nAns: %f",ans2);
                printf("\nActual result (using sin): %lf\n", sin(rad));
            
                    break; 
            case 3:         // Cosine value       // 1 - (x^2)/2! + (x^4)/4! - (x^6)/6! - ....
                printf("Enter angle(int degree): ");
                float n3;
                scanf("%f",&n3);
                
                float rad2 = n3*(PI/180);
                float ans3 = calculateCos(rad2);
                printf("\nCosine of %f is: %f",n3,ans3);
                printf("\nActual result (using cos): %lf\n", cos(rad2));
                
                    break;
                    
            case 4:         // Calculating log value
                printf("Enter a number: ");
                double x;
                scanf("%lf",&x);        //  x - (x^2)/2 + (x^3)/3 - (x^4)/4 + ...
                int numTerms = acc;
                double result = calculateLog(x, numTerms);

                        // Compare with the actual logarithm value
                double actual_result = log(1 + x);

                printf("\nApproximated result: %lf\n", result);
                printf("Actual result (using log): %lf\n", actual_result);
                
                    break;                          
            case 0: printf("You have exited from the program!"); exit; break;
            default:
                printf("\nPlease enter proper choice.\n");
        }
    }while(ch != 0);
    
    return 0;
}