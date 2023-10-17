#include <stdio.h>
int main() {
    int a;
    // the loop is going to go on until a = 4 
    for (a = 0; a < 5; a++) // a<5 is the terminating condition
    {
        printf ("a is equal to %d\n", a);
        // loop ends when a = 5
    }
    //but because a = 5 it drops out of the loop and hence prints out at a = 5
    printf ("I've finished the loop and a is equal to %d\n", a);
    return 0;
    }
