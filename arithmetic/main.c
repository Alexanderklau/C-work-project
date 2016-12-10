#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   float redius = 0.0f;
   float diamter = 0.0f;
   float circumference = 0.0f;
   float area = 0.0f;
   float Pi = 3.1415926;
   printf("Input the diameter of the table:");
   scanf("%f",&diamter);
   redius = diamter/2.0f;
   circumference = 2.0 * Pi * redius;
   area = Pi * redius * redius;
   printf("\nThe circumference is %.2f",circumference);
   printf("\nThe area is %.2f\n",area);
   return 0;
}
