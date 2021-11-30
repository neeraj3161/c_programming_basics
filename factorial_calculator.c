#include <stdio.h>
int main()
{
    int num, i, fact = 1;
    printf("Enter the number to do the factorial : ");
    scanf("%d", &num);
    printf("%d", num);
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("The factorial of the given number is %d\n", fact);
    return 0;
}