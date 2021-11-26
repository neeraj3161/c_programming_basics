#include<stdio.h>
int main()
{
    // int p,n,;
    // float r,si;
    // p=1000;
    // n=3;
    // r=8.5;
    // //formula for simple interest
    // si=p*n*r/100;
    // //%d is for integres,%f is for real values,%c for characters
    // printf("The sum of ineterst is %f\n",si);
    // printf("Principal amout is %d\n",p);
    // printf("No of years are %d\n",n);
    // printf("Rate if interest = %f\n",r);
    // return 0;

    //lets make this program interactive

    int p,n;
    float r,si;
    printf("Enter the value of p,n,r");
    // for the scan f the input of three values should be seerated by a 'space' not comma
    scanf("%d %d %f",&p,&n,&r);
    // here at &p we are saying the computer at which memory location should a this value needs to be sent
    si=p*n*r/100;
    printf("The simple interest is %f",si);
    return 0;



}