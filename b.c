//Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic
// salary. Write a program to calculate his gross salary.

#include<stdio.h>
#include <conio.h>

int main()
{
    int basic_salary;
    int dearness_allowance;
    int house_rent_allowance;
    int gross_pay;
    printf("Ramesh Enter your basic salary : ");
    scanf("%d",&basic_salary);
    dearness_allowance=(basic_salary*40)/100;
    printf("Your dearness allowance is %d\n",dearness_allowance);
    house_rent_allowance=(basic_salary*20)/100;
    printf("Your house rent allowance is %d\n",house_rent_allowance);
    gross_pay=basic_salary+dearness_allowance+house_rent_allowance;
    printf("Gross salary : %d",gross_pay);
    getch();  //in windows to hold the file on the command line screen this function gethc(); is available in include conio.h header file
    return 0;
}