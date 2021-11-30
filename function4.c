#include <stdio.h>
void area_of_square(); //prototype
int main()
{
    int side, area;

    area_of_square();
    return 0;
}

void area_of_square()
{
    int square, side_length;
    printf("Enter the side length : ");
    scanf("%d", &side_length);
    square = side_length * side_length;
    printf("Area is %d", square);
}