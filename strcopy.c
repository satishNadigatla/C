#include<stdio.h>
void main() 
{
char str1[10]={"nagesh"};
char str2[10];
int i=0;
while(str1[i] != '\0')
{
str2[i]=str1[i];
i++;
}
str2[i]='\0';
printf("%s",str2);
}
