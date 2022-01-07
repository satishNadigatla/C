#include<stdio.h>
void main(){
char str[50];
int i,count=0;
printf("enter the string:");
fgets(str,50,stdin);
for(i=0;str[i] != '\0';i++)
{
if(i != 0 && str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
{
 count++;
}
}
if(count==0)
printf("no words given");
else
printf("%d words",count++);
}
