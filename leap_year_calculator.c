#include<stdio.h>
int main()
{
    int entered_year;
    printf("Enter the year : ");
    scanf("%d",&entered_year);
    if(entered_year%4==0){
        printf("This is a leap year!!");
    }
    else{
        printf("This is not a leap year");
    }
    return 0;
}