#include<stdio.h>
#include<conio.h>

int main()
{
    int basic_salary,HRA,DA,gross;
    printf("Enter your basic salary : \n");
    scanf("%d",&basic_salary);
    if (basic_salary<1500){
        HRA=basic_salary*10/100;
        DA=basic_salary*90/100;
        gross=basic_salary+HRA+DA;
        printf("Gross salary is Rs.%d",gross);
        getch();
    }
    else{
        if (basic_salary>=1500){
            HRA=500;
            DA=basic_salary*98/100;
            gross=basic_salary+HRA+DA;
            printf("Gross salary is Rs.%d",gross);
            getch();

        }
    }
    return 0;
}

// If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary and DA = 90% of basic salary. If his salary is either equal to or above Rs.
// 1500, then HRA = Rs. 500 and DA = 98% of basic salary. If the employee’s salary is input through the keyboard write a program to find his gross
// salary