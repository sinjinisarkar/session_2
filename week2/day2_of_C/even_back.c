#include <stdio.h>
int main()
{
    int num = 20;
    while(num > 0) //testing that num is greater than 0 everytime if it is not then the loop ends
    {
        printf("%d\n", num);
        num -= 2;

    }

    return 0;
}