//farenheit or celsius
#include <stdio.h>

int main()
{
    float fa;
    printf("Please enter temperature in farenheit: ");
    scanf("%f", &fa);
    float ce;
    ce = (fa - 32)/1.8;
    printf("You temperature in celsius is: %f\n", ce);
    return 0;
    
}