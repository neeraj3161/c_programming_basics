#include<stdio.h>
int main()
{
    char gender;
    int years_of_service,qualification;
    printf("Enter your gender m/f " );
    scanf("%c",&gender);
    printf("Enter your years of service : ");
    scanf("%d",&years_of_service);
    printf("Enter your qulification PG=0/G=1 ? :");
    scanf("%d",&qualification);
    if (gender=='m' && years_of_service>=10 && qualification==0){
        printf("Your salary is 15000");
    }
    else if (gender=='m' && years_of_service>=10 && qualification==1){
        printf("Your salary is 10000");
    }
    else if (gender=='m' && years_of_service<10 && qualification==0){
        printf("Your salary is 10000");
    }
    else if (gender=='m' && years_of_service<10 && qualification==1){
        printf("Your salary is 7000");
    }
    else if(gender=='f' && years_of_service>=10 && qualification==0){
        printf("Your salary is 12000");
    }
    else if(gender=='f' && years_of_service>=10 && qualification==1){
        printf("Your salary is 9000");
    }
    else if(gender=='f' && years_of_service<10 && qualification==0){
        printf("Your salary is 10000");
    }
    else if(gender=='f' && years_of_service<10 && qualification==1){
        printf("Your salary is 6000");
    }

    return 0;
}