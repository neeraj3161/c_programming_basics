#include<stdio.h>
int main()
{
    int i;
    // the below condition fails but it still prints it one time
    do
    {
        printf("Hi there");
    } while (i==0);

    // now lets do the same with while loop


    while (i==0)
    {
        printf("Hi there");
    }

    // this won't print because it first checks the condition
    
    
    return 0;
}