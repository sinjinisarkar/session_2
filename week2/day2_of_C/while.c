#include <stdio.h>
int main() 
{
    int a = 0;
    while (a<5) { //testing condition to check if a is less than 5 if not then loop stops
        printf("a is equal to %d\n", a );
        a++; //incrementing a if we don't do it then it will go for infintely

    }
    printf ("I've finished the loop and a is equal to %d\n", a);
    return 0;



}
