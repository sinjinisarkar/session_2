//Write a program to swap the values of two variables
#include <stdio.h>

int main()
{
    int a;
    int b;
    int temp;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping the value of a: %d\n", a);
    printf("After swapping the value of b: %d\n", b);
    return 0;

}