#include<stdio.h>
#include<math.h>
int main()
{
float p,r,t;
printf("Enter principle amount: ");
scanf("%f",&p);
printf("Enter rate: ");
scanf("%f",&r);
printf("Enter number of years: ");
scanf("%f",&t);
printf("Simple Interest = %f",p*r*t/100.0);
printf("\nCompound Interest = %f",p*(pow(1+0.01*r,t)-1));
}