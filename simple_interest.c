//To find simple interest 
#include<stdio.h>
int main()
{
float principal,simple_interest,rate,time;
printf("enter principal,rate,time\n");
scanf("%f %f %f",&principal,&rate,&time);
simple_interest=(principal*rate*time)/100;
printf("simple intrest is %.2f\n",simple_interest);
return 0;
}
