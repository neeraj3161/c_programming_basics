#include<stdio.h>
int main()
{
    char entered_value;
    printf("Enter the value : ");
    scanf("%c",&entered_value);
    if (entered_value>=60 && entered_value<=90){
        printf("The character entered is a upper carse char");
    }
    else if (entered_value>=97 && entered_value<=122){
        printf("The character is a lower case characters");
    }
    else if (entered_value>=0 && entered_value<=9){
        printf("The character is a number from 0-9");
    }
    else if ((entered_value>=0 && entered_value<=47)||(entered_value>=58 && entered_value<=91)||(entered_value>=91 && entered_value<=96)||(entered_value>=123 && entered_value<=127))
    {
        printf("The character is a special character");
    }


    return 0;
}