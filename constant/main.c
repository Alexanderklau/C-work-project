#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159f

int main2(void)
{
float redius = 0.0f;
   float diameter = 0.0f;
   float circumference = 0.0f;
   float area = 0.0f;

   printf("Input the diameter of a table:");
   scanf("%f",&diameter);

   redius = diameter/2.0f;
   circumference = 2.0f * PI * redius;
   area = PI * redius * redius;

   printf("\n The circumference is %.2f. ",circumference);
   printf("\n The area is %.2f.\n",area);
   return 0;
}


