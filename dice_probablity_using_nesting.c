#include<stdio.h>
int main()
{
    // checking the probablity of two dice
    int i,j;
    for (i=1;i<=6;i++){
        for (j=1;j<=6;j++){
            printf("Combinations of two dice are %d , %d\n",i,j);
        }
    }
    return 0;
}