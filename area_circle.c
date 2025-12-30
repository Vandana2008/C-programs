//Finding area of circle
#include <stdio.h>
#define PI 3.14159
int main()
{
  float radius,area;
printf("enter radius\n");
scanf("%f",&radius);
area=PI*radius*radius;
printf("area of circle=%.2f",area);
return 0;
}
