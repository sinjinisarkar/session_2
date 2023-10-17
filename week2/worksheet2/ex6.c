// Write a program to concatenate two integer arrays, each of three integers
#include <stdio.h>

int main() 
{
    int i;
    int a[] = {3,4,5};
    int b[] = {7,8,9};
    int c[6];
    for(i=0; i<3; i++)
    {
        c[i] = a[i];
    }
    for(i=3; i<6; i++)
    {
        c[i] = b[i-3];
    }

    printf("Concatenation of the two elements are: ");

    for (i = 0; i<6; i++)
    {
        printf("%d", +c[i]);
    }

}