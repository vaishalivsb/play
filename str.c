#include<stdio.h>
#include<string.h>
void main()
{
char str[30];
scanf("%s",&str);
char *rev;

rev=strrev(str);
printf("%s",rev);
}
