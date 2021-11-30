#include <stdio.h>
void change(int a);
int main()
{
    int b = 22;
    change(b); //here we are changing the value of a and assigning it a new value
    return 0;
}

void change(int a)
{
    printf("%d", a);
}