//Exercise 10: Simple Interest CalculationProblem 
#include <stdio.h>

int main()
{
    int P;
    int R;
    int T;
    printf("Please enter the principal amount: ");
    scanf("%d",&P);
    printf("Please enter the rate of interest per period in ");
    scanf("%d",&R);
    printf("Please enter the time period: ");
    scanf("%d",&T);
    int I;
    I = (P*R*T)/100;
    printf("Simple Interest = %d\n", I );
    return 0;
}