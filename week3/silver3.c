//q3 Grade Checker with Distinction: Write a program to check if a studenthas passed, failed, or achieved a distinction based on an input mark (passmark is 50, distinction is 70).

#include <stdio.h>

int main() {
    int num;
    printf("Enter your grade: ");
    scanf("%d", &num);

    if (num >= 0 && num <= 100) 
    {
        if (num >= 70) 
        {
            printf("Distinction");
        } 
        else if (num >= 50) 
        {
            printf("Pass");
        } 
        else 
        {
            printf("Fail");
        }
    } 
    else 
    {
        printf("Please enter your grade between 0 and 100");
    }

    return 0;
}


