#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,total_marks,percentage;
    printf("Enter the marks obrained in each subject with a space : ");
    scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
    total_marks=s1+s2+s3+s4+s5;
    percentage=(total_marks/500)*100;
    printf("%f",percentage);
    if((percentage>60)||(percentage==60)){
        printf("First division");
    }
    if((percentage>=50) && (percentage<=59)){
        printf("Second division");
    }
    if((percentage>=40) && (percentage<=49)){
        printf("Second division");
    }
    if (percentage<40)
    {
        printf("You failed");
    }
    
    
    return 0;
}

// Example 4.1: The marks obtained by a student in 5 different subjects are input through the keyboard. The student gets a division as per the
// following rules:
// Percentage above or equal to 60 - First division
// Percentage between 50 and 59 - Second division
// Percentage between 40 and 49 - Third division
// Percentage less than 40 - Fail
// Write a program to calculate the division obtained by the student.
