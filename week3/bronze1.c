//q1 Write a program to check if a number is positive, negative, or zero.
#include <stdio.h>

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if (num == 0)
  {
    printf("The number is zero");
  }
  else if (num > 0)
  {
    printf("The number is positive");
  }
  else
  {
    printf("The number is negative");
  }
  
}