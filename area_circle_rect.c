#include<stdio.h>
#include<math.h>
int main()
{
    float length_of_rect,breadth_of_rect,perimeter_of_rect,radius_of_circle,area_of_rect,area_of_circle,circumference,pi;
    printf("Let's calculate the Area and Perimeter of Rectangle using 'C'\n");
    printf("Enter the length and bredth of rectangle with a space : \n");
    scanf("%f %f",&length_of_rect,&breadth_of_rect);
    area_of_rect=length_of_rect*breadth_of_rect;
    perimeter_of_rect=2*(area_of_rect);
    printf("The perimeter , area of rectangle are %f \n",area_of_rect);
    printf(" , %f\n",perimeter_of_rect);
    printf("Let's now do it for circle...\n");
    printf("Enter the radius of circle : ");
    scanf("%f",&radius_of_circle);
    area_of_circle=3.14*pow(radius_of_circle,2);
    circumference=2*3.14*radius_of_circle;
    printf("The area , cicumference of circle are %f \n",area_of_circle);
    printf(" , %f\n",circumference);
    return 0;
}

// ) The length and breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area and
// perimeter of the rectangle, and the area and circumference of the circle.


// formulas:

// area of rectangle = l*b 
// permitere of rectangle = 2l*2b or 2(l*b)

// area of circle = 3.14*r**2
// circumference = 2*3.14*r
// to square you can use the pow function