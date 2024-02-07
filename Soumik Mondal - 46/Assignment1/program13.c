/*Matrix*/              //OK
#include<stdio.h>
#include<stdlib.h>

void main(){
    int M[100][100],p,k,i,j,num;
    float R[100][100],matrix[100][100],n,mul[100][100],sum;
    
    printf("Enter n:");
    scanf("%f",&n); 
            // Generating random element of N*N Matrix
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<n-1;j++){
            M[i][j]=rand()%100-1;
            sum+=M[i][j];
        }
        M[i][j]=1-sum;    
    }
            // Displaying M
    printf("\nLet M is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%4d ",M[i][j]);
        }printf("\n");
    }

    printf("\nEnter p:");
    scanf("%d",&p);

    printf("\nR is: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==0){
                R[i][j]=(1/n);
                printf("%6.2f\n",R[i][j]);
            }else{
                R[i][j]=0;
            } 
        }
    }
    
    for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		matrix[i][j]=M[i][j];
	    }
    }
    
    num=1;
    while(num<p){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                sum=0;
                for(k=0;k<n;k++){
                    sum+=matrix[i][k]*M[k][j];
                }
                mul[i][j]=sum;
            }
        }num++;
    }
    
    //  print2
    
    printf("\nM^p is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        	
        	matrix[i][j]=mul[i][j];
        	printf("%6.0f ",matrix[i][j]);
	    }
        printf("\n");
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        	sum=0;
            for(k=0;k<n;k++){
                sum+=matrix[i][k]*R[k][j];
            }
            mul[i][j]=sum;
        }
    }
            //   print3
    printf("\n R=(M^p)*R is:\n");
    for(i=0;i<n;i++){        
        printf("%6.2f ",mul[i][0]);
        printf("\n");
    }
}
