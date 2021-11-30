//degree to celcius function

#include <stdio.h>
float toFarenheit(float degree);

int main()
{
    float temp;
    printf("Enter the temperature in degrees : ");
    scanf("%f", &temp);
    printf("The temperature in farenheit is %f", toFarenheit(temp));

    return 0;
}

float toFarenheit(float degree)
{
    float result = (degree * 9 / 5) + 32;
    return result;
}

///Formula	for 1 degree
// (1°C × 9/5) + 32 = 33.8°F
