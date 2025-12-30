//To convert temperature from fahrenheit into celsius
#include <stdio.h>
int main()
{
  float fahrenheit,celsius;
printf("enter temperature in fahrenheit\n");
scanf("%f",&fahrenheit);
celsius=(fahrenheit-32)*5/9;
printf("temperature in celsius is %.2f",celsius);
return 0;
}
  
