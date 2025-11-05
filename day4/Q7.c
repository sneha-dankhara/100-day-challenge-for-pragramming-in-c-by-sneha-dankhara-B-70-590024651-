#include <stdio.h>
int main()
{
    int a,b,c; 
    printf("\nEnter value of 'a' and 'b' respectively:\n");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;  
    a=a-b;
    printf("value of a after swapping = %d",a);
    printf("\nvalue of b after swapping = %d",b);
}