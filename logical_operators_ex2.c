#include<stdio.h>
int main()
{
char matrial_status,sex;
int age;
printf("Are you married (y/n) : ");
scanf("%c %c",&matrial_status,&sex);
printf("Enter your age : ");
scanf("%d",&age);
printf("Age entered : %d",age);
if ((matrial_status=='y')||(matrial_status=='n' && sex=='m' && age>30) || (matrial_status=='n' && sex=='f' && age>25)){
    printf("You are insured");
    }
else{
    printf("You are not insured");
    }
return 0;
}


// Another place where logical operators are useful is when we want to write programs for complicated logics that ultimately boil down to only two
// answers—yes or no. The following example illustrates this:
// Example 4.2: A company insures its drivers in the following cases:
// If the driver is married.
// If the driver is unmarried, male & above 30 years of age.
// If the driver is unmarried, female & above 25 years of age.
// In all other cases, the driver is not insured. If the marital status, sex and age of the driver are the inputs, write a program to determine whether the
// driver should be insured or not.
// The final outcome of the program would be—either the driver should be insured or the driver should not be insured.