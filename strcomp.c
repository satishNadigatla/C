#include<stdio.h>
void main()
{
char str1[20],str2[20];
printf("enter string1:");
fgets(str1,20,stdin);
printf("enter string2:");
fgets(str2,20,stdin);
int i=0,flag=0;
while(str1[i] != '\0' && str2[i] != '\0')
{
if(str1[i]!=str2[i])
{
flag = 1;
break;
}
i++;
}
if(flag ==0)
printf("both are same ");
else
printf("not same ");
}
