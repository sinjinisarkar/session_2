//q4 Write a program to validate if a tem-perature is within the range of -10 to 40 degrees Celsius.
#include <stdio.h>

int main()
{
  float temp;
  printf("Enter your temperature in celsius: ");
  scanf("%f", &temp);
  if (temp >= -10 && temp <= 40)
  {
    printf("Temperature is in correct range");
  }
  else
  {
    printf("Temperature is not in correct range");
  }
}

