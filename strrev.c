#include<stdio.h>
void main()
{
char str[20];
int i=0,temp[20],len,count=0;
printf("enter the string:");
fgets(str,20, stdin);
while(str[count] != '\0')
{
count++;
}
len=count-1;
while(i<len)
{
temp[i]=str[i];
str[i]=str[len];
str[len]=temp[i];
i++;
len--;
}
printf("the string is :%s",str);

}
