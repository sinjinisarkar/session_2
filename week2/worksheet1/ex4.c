//Write a program to calculate the area of a circle given the radius
#include <stdio.h>

int main()
{
    float pi = 3.14;
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    float area;
    area = pi*r*r;
    printf("The area of circle is: %f\n", area);
}