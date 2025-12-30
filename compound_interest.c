//To find compound interest
#include<stdio.h>
#include<math.h>
int main()
{
  float amount,principal,rate,time,compound_interest;
printf("enter principal,rate,time\n");
scanf("%f %f %f",&principal,&rate,&time);
amount=principal*pow((1+rate/100),time);
compound_interest=amount-principal;
printf("compound interest is %.2f\n",compound_interest);
return 0;
}
