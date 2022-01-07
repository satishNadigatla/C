#include<stdio.h>
void main()
{
int n,pos;
printf("enter the number:");
scanf("%d",&n);
printf("enter the position");
scanf("%d",&pos);
n=n | (1<<pos);
printf("%d",n);
}
