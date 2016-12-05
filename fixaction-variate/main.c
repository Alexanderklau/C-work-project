#include <stdio.h>
#include <stdlib.h>

int main()
{
    float diameter = 0.0f;
    float redius = 0.0f;
    const float Pi = 3.14159f;
    printf("Input the diameter of the table:");
    scanf("%f",&diameter);
    redius = diameter/2.0f;
    printf("\nThe circumference is %.2f",2.0f *Pi *redius);
    printf("\nThe area is %.2f.\n",Pi *redius * redius);
    return 0;
}
