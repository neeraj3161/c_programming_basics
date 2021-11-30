
#include <stdio.h>
int force(float mass);
int main()
{
    int mass;
    printf("Enter the mass : ");
    scanf("%d", &mass);
    printf("The force is %d N.", force(mass));

    return 0;
}

int force(float mass)
{
    int result = mass * 9.81;
    return result;
}

// force=m*g;