//Write a program that calculates the distance travelled by light in a given number of days. 
#include <stdio.h>

int main()
{
    int nod;
    printf("Enter the number of days: ");
    scanf("%d", &nod);
    int dist;
    dist = 299792*nod*24*3600;
    printf("The distance travelled by light in km/h= %d\n", dist);
    return 0;

}