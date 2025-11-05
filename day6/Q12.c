#include<stdio.h>
#include<math.h>
int main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);
if (n>0)
{
    printf("%d is a positive number",n);
}
else if ( n=0 )
{
    printf("%d is neither positive nor negative",n);
}
else
{
    printf("%d is negative",n);
}
}