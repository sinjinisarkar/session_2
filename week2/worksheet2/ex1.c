#include <stdio.h>



int main()

{

  int a[10], num, add;



  for (num = 0; num < 10; num++)

    {

        a[num] = num;

        printf("Array List %d\n", a[num]);

        add += num;

    }



    printf("The sum of all five integers = %d\n", add);



  return 0;

}
