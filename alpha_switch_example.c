#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character from a,b,c ? ");
    scanf("%c",&ch);
    switch (ch){
        case 'A':
        case 'a':
        printf("A as an apple");
        break;
        case 'B':
        case 'b':
        printf("B as an boy");
        break;
        case 'C':
        case 'c':
        printf("C as an cat");
        break;
        default:
        printf("Alphabet not from the given choice!!");

    }
    return 0;
}