/*
#include<stdio.h>
#include<string.h>
void main()
{
char str[10]={"nagesh"};
printf("%s",str);
int n=strlen(str);
printf("\nlength is %d ",n);
}
*/
#include<stdio.h>  
void StrLength(char []);
void main()   
{   
 char str[20];
 printf("Enter the string? ");  
 fgets(str, 20,stdin);   
 StrLength(str); 
}   
void StrLength(char x[])
{
int i=0,count=0;
while(x[i] != '\0')
{
count++;
i++;
}
printf("%d",count);
}
