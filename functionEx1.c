#include <stdio.h>
int average(int a, int b, int c);
int main()
{
    int result, a, b, c;
    printf("Enter value a : ");
    scanf("%d", &a);
    printf("Enter value b : ");
    scanf("%d", &b);
    printf("Enter value c : ");
    scanf("%d", &c);
    printf("The average of the 3 numbers are %d", average(a, b, c));

    return 0;
}

int average(int a, int b, int c)
{
    int average_value;
    average_value = (a + b + c) / 3;
    return average_value;
}