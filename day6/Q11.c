#include<stdio.h>
#include<math.h>
int main()
{
int n;
printf("Enter a positive number: ");
scanf("%d",&n);
if ( n % 2 == 0 )
printf("%d is even number",n);
else
printf("%d is odd number",n);
}