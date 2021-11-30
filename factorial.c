#include<stdio.h>
int main()
{
    int i=1,j;
    float  fact,sum=0.0;
    for(i=1;i<=7;i++){
        fact=1.0;
        for(j=1;j<=i;j++)
            
        fact=fact*j;
        // yaha ek ek value calculate krke bhej rhe hai sum variable me
        sum=sum+i/fact;
            

        
        
    }
    printf("The value of sum is %f",sum);
    return 0;
}