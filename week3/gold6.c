//q6 Write a program that continuously asks the user for a number until they enter a termination value of -1. The program should validate if the number is within the range of 0 to 100 or if it’s the termination value, and print a message accordingly
#include <stdio.h>

int main()
{
  int num;
  while (1)
    
  {
    printf("Enter a number or enter -1 to terminate: ");
    scanf("%d" ,&num);
    if (num == -1)
    {
      printf("Program Terminated");
      break;
    }
    else if (num >=0 && num<=100)
    {
      printf("It is is within the range of 0 to 100\n");
    }
    else
    {
      printf("Please enter a valid number: \n");
    }
  }
  return 0;
  
  
}