#include<stdio.h>
int main()
{
    
    float sub1,sub2,sub3,sub4,sub5,aggregate_marks,percentage_obtained;
    printf("Enter your marks of all the 5 subsjects with a space : \n");
    scanf("%f %f %f %f %f",&sub1,&sub2, &sub3, &sub4,&sub5);
    // aggregate is total marks obtained
    aggregate_marks=(sub1+sub2+sub3+sub4+sub5);
    percentage_obtained=(aggregate_marks/500)*100;
    printf("Your aggregate marks is %f\n", aggregate_marks);
    printf("Your percentange is %f",percentage_obtained);
    return 0;
}


// Problem 1.3
// If the marks obtained by a student in five different subjects are input through the keyboard, write a program to find out the aggregate marks and
// percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100.