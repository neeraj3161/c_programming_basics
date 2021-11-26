#include<stdio.h>
int main()
{
    int n,d5,d4,d3,d2,d1,rev_num;
    printf("Enter a five digit number : ");
    scanf("%d",&n);
    // last number
    d5=n%10;
    // remaining numbers
    n=n/10;
    // last number
    d4=n%10;
    // remaining numbers
    n=n/10;
    // last number
    d3=n%10;
    // remaining numbers
    n=n/10;
    // last number
    d2=n%10;
    // remaining numbers
    n=n/10;
    // last number
    d1=n%10;
    // remaining numbers
    n=n/10;
    rev_num=d5*10000+d4*1000+d3*100+d2*10+d1;
    printf("%d",rev_num);
    return 0;
}