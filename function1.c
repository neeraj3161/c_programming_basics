#include <stdio.h>

int sum(int a, int b); //prototype
int main()
{
    int c;
    c = sum(15, 7); //calling and assigning the return value to c
    printf("The value of c is %d", c);

    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result; //returning the result
}

// here a and b are parameter and 15,7 are arrguments. so what we take is called parameters and what we give is arrguments
// arrguments are actual value
// a function can return one value at a time
