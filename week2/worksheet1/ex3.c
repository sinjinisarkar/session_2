//Write a program to display the maximum sizes of basic data types (int, float, double, char)
#include <stdio.h>

int main()
{
    int intType;
    float floatType;
    char charType;
    double doubleType;

    //use the function sizeof to find the data size of the data types

    printf("The integer size is: %ld\n", sizeof(intType));
    printf("The float size is: %ld\n", sizeof(floatType));
    printf("The char size is: %ld\n", sizeof(charType));
    printf("The double size is: %ld\n", sizeof(doubleType));
    return 0;
}