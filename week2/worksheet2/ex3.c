#include <stdio.h>

int main() {
    int n; 
    int i;
    int temp;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &n); 
    
    int a[n]; // declare an array with n elements
    printf("Please enter the numbers:");
    
    for(i=0; i<n; i++) //iterate through the numbers input by the user and populate them into an array
    {
        scanf("%d", &a[i]);
    
    }
    

    for(i=0; i<n/2; i++){ // actual job is done here where the first element is shifted to the last element
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    printf("Reversed elements are: "); //the reveresed elements are then printed and are then populated into an array
    for(i=0; i<n; i++)
    {
        printf("%d", a[i]);
    }
return 0;
}