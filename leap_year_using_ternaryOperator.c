#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    (year%4==0?printf("Is a leap year"):printf("Is not a leap year"));
    return 0;
}