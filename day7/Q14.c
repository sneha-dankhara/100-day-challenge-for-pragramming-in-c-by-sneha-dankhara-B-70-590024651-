#include<stdio.h>
int main()
{
char c; 
printf("Enter a character: ");
scanf("%c",&c);
if ( c == 'a'||c == 'e'||c == 'i' ||c == 'o'||c == 'i')
{
printf("%c is a vowel",c);
}
else
{
printf("%c is a consonant",c);\
}
}