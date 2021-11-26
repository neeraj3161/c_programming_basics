#include<stdio.h>
int main()
{
    float temp_in_fahrenheit,conversion_to_celsius;
    printf("Enter the temperature in fahrenheit : ");
    scanf("%f",&temp_in_fahrenheit);
    // here below you will get a error because for a int value it cancels after point and 18*0=0 do not close (5/9) or else it will be int and will mess the code as per bodmas
    // conversion_to_celsius=(temp_in_fahrenheit-32)*(5/9);
    conversion_to_celsius=(temp_in_fahrenheit-32)*5/9;
    printf("Temp in degrees centigrade is %f",conversion_to_celsius);
    return 0;
}

// (a) Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade
// degrees.


// formula


// (°F − 32) × 5/9 = °C
