//Write a program to take two integers as input, add them, and then display the sum
#include <stdio.h>

int main()
{
    int a;
    printf("Enter you first integer:");
    scanf("%d", &a);
    int b;
    printf("Enter you second integer:");
    scanf("%d", &b);
    int add;
    add = a+b;
    printf("Sum of two numbers: %d\n", add);

    return 0;


}