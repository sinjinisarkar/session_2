//Write a program to find duplicate elements in an array of six random integers
#include <stdio.h>

int main() 
{
    int n; 
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the numbers: ");
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);

    }

    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (a[i] == a[j])
            {
                printf("Duplicate item is: %d\n", a[j]);
            }
            
        
            
        }
    }
return 0;

}