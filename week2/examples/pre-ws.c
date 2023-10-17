#include <stdio.h>

int main()
{
    float l;
    printf("Enter the length of the rectangle: ");
    scanf("%f\n", &l);
    float w;
    printf("Enter the width of the rectangle: ");
    scanf("%f\n", &w);
    float area;
    area = l*w;
    printf("The area of rectangle is: %f\n", area);
    return 0;

}