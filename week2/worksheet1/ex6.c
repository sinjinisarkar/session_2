//Write a program to determine whether a given integer is odd or even.
#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a%2 == 0){
        printf("Even number");
    }
    if (a%2 != 0){
        printf("Odd number");
    }
}