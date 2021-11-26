#include<stdio.h>
int main()
{
    int number_entered,even,odd;
    printf("Enter the number : ");
    scanf("%d",&number_entered);
    if (number_entered%2==0){
        printf("Your number is a even number.\n");
    }
    else{
        printf("This is a odd number");
    }
    return 0;
}