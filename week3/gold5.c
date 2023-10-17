//q5 Create a menu system using a SWITCH statement that allows the user to select between 5 options. Include an error message for invalid choices

#include <stdio.h>

int main()
{
  int choose;
  printf("Choose between the 5 options (please enter a number to choose between the 5 options): \n Option 1 \n Option 2 \n Option 3 \n Option 4 \n Option 5\n");
  scanf("%d", &choose);
  switch(choose){
    case 1: printf("You chose option 1");
    break;
    case 2: printf("You chose option 2");
    break;
    case 3: printf("You chose option 3");
    break;
    case 4: printf("You chose option 4");
    break;
    case 5: printf("You chose option 5");
    break;
    defualt: printf ("A different option has been selected");
  }
  
  
    
    
  
  
    
    
  
}