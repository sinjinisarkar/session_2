//Write a program to calculate the factorial of an integer
#include <stdio.h>

int main()
{
    int a;
    int fac = 1;  // Initialize fac to 1
    printf("Please enter a number: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) 
        fac = fac * i; // factorial calculation
    }

    printf("Factorial Number: %d", fac);
    return 0;
}

