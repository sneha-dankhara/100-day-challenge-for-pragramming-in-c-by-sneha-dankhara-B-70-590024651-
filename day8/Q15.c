#include<stdio.h>
int main()
{
char c;
printf("Enter a character: ");
scanf("%c",&c);
if ( c>='A'&&c <= 'Z')
{
printf("%c is upper case",c);
}
else if ( c>='a'&&c <= 'z')
{
printf("%c is lower case",c);
}
else if ( c>=0&&c <= 9)
{
printf("%c is a digit");
}
else
{
printf("%c is a special character");
}
}