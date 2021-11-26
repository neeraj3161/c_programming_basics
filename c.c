#include<stdio.h>
#include<conio.h>
int main()
{
    char city1[10],city2[10];
    int distance_between_cities;
    int distance_in_cms,distance_in_m;
    float distance_in_inches,distance_in_feet;
    printf("Enter the name of city 1 : \n");
    scanf("%s",&city1);
    printf("Enter the name of city 2 : \n");
    scanf("%s",&city2);
    printf("Enter the distance between two cities in kms : \n");
    scanf("%d", &distance_between_cities);
    distance_in_cms=distance_between_cities*100000;
    distance_in_m=distance_between_cities*1000;
    distance_in_inches=distance_between_cities*39370.1;
    distance_in_feet=distance_between_cities*3280.84;
    printf("The distance between two cities in inches is %f\n",distance_in_inches);
    printf("The distance between two cities in meters is %d\n",distance_in_m);
    printf("The distance between two cities in feet is %f\n",distance_in_feet);
    printf("The distance between two cities in cms is %d\n",distance_in_cms);
    getch();
    return 0;
}

// The distance between two cities (in km.) is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches
// and centimeters.
