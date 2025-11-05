#include<stdio.h>
#include<math.h>
int main()
{
int s,h,m,se,r;
printf("Sneha Dankhara\nday 5)\nQ10.\n");
printf("Enter time in seconds: ");
scanf("%d",&s);
h=s/3600;
r=s%3600;
m=r/60;
se=r%60;
printf("Time is %d : %d : %d",h,m, se);
}